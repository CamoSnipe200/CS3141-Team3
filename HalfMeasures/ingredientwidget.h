#ifndef INGREDIENTWIDGET_H
#define INGREDIENTWIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QDoubleSpinBox>
#include <QComboBox>
#include <QPushButton>

class IngredientWidget : public QWidget
{
    Q_OBJECT
public:
    explicit IngredientWidget(QWidget *parent = nullptr);
    QLineEdit *m_ingredientNameLineEdit;
    QDoubleSpinBox *m_quantitySpinBox;
    QComboBox *m_measurementTypeComboBox;
    QPushButton *removeButton;

signals:

};

#endif // INGREDIENTWIDGET_H
