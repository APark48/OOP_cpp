// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/6/2020 
// Copyright © 2020. All rights reserved.

#include <iostream>
#include "Store.h"
using namespace std;

int main(){
    //Creating 7 products
    Products rose("Rose", 12, "A rose is a woody perennial flowering plant of the genus Rosa, in the family Rosaceae, or the flower it bears.");
    Products lilium("Lilium", 15, "Lilium is a genus of herbaceous flowering plants growing from bulbs, all with large prominent flowers.");
    Products gerbera("Gerbera", 12, "Gerbera is a genus of plants in the Asteraceae (daisy family).");
    Products tulip("Tulip", 12, "Tulips (Tulipa) form a genus of spring-blooming perennial herbaceous bulbiferous geophytes (having bulbs as storage organs).");
    Products iris("Iris", 15, "Iris is a genus of 260–300 species of flowering plants with showy flowers. It takes its name from the Greek word for a rainbow, which is also the name for the Greek goddess of the rainbow, Iris.");
    Products helianthus("Helianthus", 18, "Helianthus is a genus comprising about 70 species of annual and perennial flowering plants in the daisy family Asteraceae.");
    Products orchidaceae("Orchidaceae", 20, "The Orchidaceae are a diverse and widespread family of flowering plants, with blooms that are often colourful and fragrant, commonly known as the orchid family.");

    //Adding into catalog
    Catalog catalog;
    catalog.addToCatalog(rose);
    catalog.addToCatalog(lilium);
    catalog.addToCatalog(gerbera);
    catalog.addToCatalog(tulip);
    catalog.addToCatalog(iris);
    catalog.addToCatalog(helianthus);
    catalog.addToCatalog(orchidaceae);

    //Creating cart
    Cart cart;

    //Creating Store
    Store kkothana(cart, catalog);

    
    int choice;
    
    do
    {
        cout << endl;
        cout << "KKOTHANA FLOWER SHOP" << endl;
        cout << "1. View catalog." << endl;
        cout << "2. Add products to cart." << endl;
        cout << "3. View cart." << endl;
        cout << "4. Purchase products." << endl;
        cout << "5. EXIT." << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;
        if (choice == 1){
            kkothana.showCatalog();
        }
        if (choice == 2){
            cart.addProduct(catalog);
        }
        if (choice == 3){
            cart.printProducts();
            cout << "Total price: " << cart.totalPrice() << endl;
        }
        if (choice == 4){
            if (cart.getSize() == 0){
                cout << "No products in cart. Add products!" << endl;
            }
            else {
                kkothana.purchase();
            }
        }
    } while (choice != 5);
    

    return 1;
}

