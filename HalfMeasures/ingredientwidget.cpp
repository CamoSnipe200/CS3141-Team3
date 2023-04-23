#include "ingredientwidget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QPushButton>

IngredientWidget::IngredientWidget(QWidget *parent)
    : QWidget{parent}
{
    // Create the widgets
    m_quantitySpinBox = new QDoubleSpinBox(this);
    m_measurementTypeComboBox = new QComboBox(this);
    m_ingredientNameLineEdit = new QLineEdit(this);
    removeButton = new QPushButton("X", this);

    // Set the minimum value for the quantity spin box
    m_quantitySpinBox->setMinimum(0);

    // Set the minimum value for the quantity spin box
    m_quantitySpinBox->setMinimum(0.00);

    // Set the single step to 0.25
    m_quantitySpinBox->setSingleStep(0.25);

    // Set the number of decimals to 2
    m_quantitySpinBox->setDecimals(2);

    // Add the measurement types to the combo box
    QStringList measurementTypes = {"-", "teaspoon", "tablespoon", "fluid ounce", "cup", "pint", "quart", "gallon", "ounce", "pound", "can"};
    m_measurementTypeComboBox->addItems(measurementTypes);

    // Set the fixed width for the remove button and adjust the margins
    removeButton->setFixedWidth(22);
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(removeButton);
    buttonLayout->setContentsMargins(5, 0, 5, 0);

    // Create the layout
    QHBoxLayout *rowLayout = new QHBoxLayout;
    rowLayout->addWidget(m_quantitySpinBox);
    rowLayout->addWidget(m_measurementTypeComboBox);
    rowLayout->addWidget(m_ingredientNameLineEdit);
    rowLayout->addWidget(removeButton);

    // Set hint text
    m_ingredientNameLineEdit->setPlaceholderText("Enter ingredient name");

    // Set the layout for the widget
    setLayout(rowLayout);

    setMaximumWidth(600); // Set the maximum width to 300 pixels

    // Connect the clicked() signal of the remove button to remove the IngredientWidget
    connect(removeButton, &QPushButton::clicked, [this]() {
        deleteLater();
    });
}

// TODO: code destructor???
//IngredientWidget::~IngredientWidget()
//{
//    delete m_recipeNameLineEdit;
//    delete m_quantitySpinBox;
//    delete m_measurementTypeComboBox;
//    delete m_ingredientNameLineEdit;
//}
