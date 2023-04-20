#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct Recipe {
    string name;
    string cookTime;
    vector<pair<string, string>> ingredients;
    vector<string> instructions;
};

Recipe writeRecipeToFile(const Recipe& recipe) {
    ofstream file(recipe.name + ".recipe");
    file << recipe.name << '+' << recipe.cookTime << '+';

    // write ingredients
    for (const auto& ingredient : recipe.ingredients) {
        file << ingredient.first << ',' << ingredient.second << ';';
    }
    file << '+';

    // write instructions
    for (const auto& instruction : recipe.instructions) {
        file << instruction << ';';
    }
    file << '+' << endl;

    file.close();
}

Recipe readRecipeFromFile(const string& filename) {
    Recipe recipe;
    ifstream file(filename);
    string line;

    getline(file, line);
    stringstream ss(line);

    string ingredientString, instructionString;

    // read name and cookTime
    getline(ss, recipe.name, '+');
    getline(ss, recipe.cookTime, '+');

    // read ingredients
    getline(ss, ingredientString, '+');
    stringstream ssIngredients(ingredientString);
    string ingredient;
    while (getline(ssIngredients, ingredient, ';')) {
        stringstream ssIngredient(ingredient);
        string name, amount;
        getline(ssIngredient, name, ',');
        getline(ssIngredient, amount, ';');
        recipe.ingredients.push_back({name, amount});
    }

    // read instructions
    getline(ss, instructionString, '+');
    stringstream ssInstructions(instructionString);
    string instruction;
    while (getline(ssInstructions, instruction, ';')) {
        recipe.instructions.push_back(instruction);
    }

    file.close();

    return recipe;
}

void printRecipe(const Recipe& recipe) {
    cout << "Name: " << recipe.name << endl;
    cout << "\nCook Time: " << recipe.cookTime << endl;
    cout << "\nIngredients: " << endl;
    for (const auto& ingredient : recipe.ingredients) {
        cout << ingredient.first << ": " << ingredient.second << endl;
    }
    cout << "\nInstructions: " << endl;
    int instructionNumber = 1;
    for (const auto& instruction : recipe.instructions) {
        cout << instructionNumber << ": " << instruction << endl;
        instructionNumber++;
    }
}

std::string recipeToString(const Recipe& recipe) {
    std::stringstream ss;
    ss << "Name: " << recipe.name << std::endl;
    ss << "\nCook Time: " << recipe.cookTime << std::endl;
    ss << "\nIngredients: " << std::endl;
    for (const auto& ingredient : recipe.ingredients) {
        ss << ingredient.first << ": " << ingredient.second << std::endl;
    }
    ss << "\nInstructions: " << std::endl;
    int instructionNumber = 1;
    for (const auto& instruction : recipe.instructions) {
        ss << instructionNumber << ": " << instruction << std::endl;
        instructionNumber++;
    }
    return ss.str();
}

// int main() {
//     string recipeName = "Chicken Curry";

//     // read recipe from file
//     Recipe recipe = readRecipeFromFile(recipeName + ".recipe");
//     writeRecipeToFile(recipe);

//     // print recipe
//     // printRecipe(recipe);

//     return 0;
// }