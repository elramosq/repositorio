#ifndef PREDATOS_H
#define PREDATOS_H

#include "estructura.h"

inline void precargarDatos(Artefacto catalogo[], int & cantidadProductos) {
    
    // --- TELEVISORES Y VIDEO ---
    catalogo[0].codigo = 101; catalogo[0].nombre = "Smart TV 55"; catalogo[0].marca = "Samsung"; catalogo[0].precio = 1500.00; catalogo[0].stock = 12; catalogo[0].activo = true;
    catalogo[1].codigo = 102; catalogo[1].nombre = "Smart TV 65 OLED"; catalogo[1].marca = "LG"; catalogo[1].precio = 2800.00; catalogo[1].stock = 5; catalogo[1].activo = true;
    catalogo[2].codigo = 103; catalogo[2].nombre = "Android TV 43"; catalogo[2].marca = "Sony"; catalogo[2].precio = 1100.00; catalogo[2].stock = 15; catalogo[2].activo = true;
    catalogo[3].codigo = 104; catalogo[3].nombre = "Proyector 4K"; catalogo[3].marca = "Epson"; catalogo[3].precio = 3200.00; catalogo[3].stock = 4; catalogo[3].activo = true;
    catalogo[4].codigo = 105; catalogo[4].nombre = "Soundbar 300W"; catalogo[4].marca = "JBL"; catalogo[4].precio = 500.00; catalogo[4].stock = 20; catalogo[4].activo = true;
    catalogo[5].codigo = 106; catalogo[5].nombre = "Roku Stick"; catalogo[5].marca = "Roku"; catalogo[5].precio = 150.00; catalogo[5].stock = 30; catalogo[5].activo = true;
    catalogo[6].codigo = 107; catalogo[6].nombre = "Apple TV 4K"; catalogo[6].marca = "Apple"; catalogo[6].precio = 650.00; catalogo[6].stock = 10; catalogo[6].activo = true;
    catalogo[7].codigo = 108; catalogo[7].nombre = "Chromecast HD"; catalogo[7].marca = "Google"; catalogo[7].precio = 180.00; catalogo[7].stock = 25; catalogo[7].activo = true;
    catalogo[8].codigo = 109; catalogo[8].nombre = "Reproductor Blu-Ray"; catalogo[8].marca = "Panasonic"; catalogo[8].precio = 300.00; catalogo[8].stock = 8; catalogo[8].activo = true;
    catalogo[9].codigo = 110; catalogo[9].nombre = "Smart TV 32"; catalogo[9].marca = "Hisense"; catalogo[9].precio = 600.00; catalogo[9].stock = 18; catalogo[9].activo = true;

    // --- COMPUTO Y ACCESORIOS ---
    catalogo[10].codigo = 111; catalogo[10].nombre = "Laptop Victus 15"; catalogo[10].marca = "HP"; catalogo[10].precio = 3500.00; catalogo[10].stock = 7; catalogo[10].activo = true;
    catalogo[11].codigo = 112; catalogo[11].nombre = "Macbook Air M1"; catalogo[11].marca = "Apple"; catalogo[11].precio = 4200.00; catalogo[11].stock = 5; catalogo[11].activo = true;
    catalogo[12].codigo = 113; catalogo[12].nombre = "Laptop IdeaPad 3"; catalogo[12].marca = "Lenovo"; catalogo[12].precio = 1800.00; catalogo[12].stock = 12; catalogo[12].activo = true;
    catalogo[13].codigo = 114; catalogo[13].nombre = "Monitor 24 144Hz"; catalogo[13].marca = "LG"; catalogo[13].precio = 800.00; catalogo[13].stock = 10; catalogo[13].activo = true;
    catalogo[14].codigo = 115; catalogo[14].nombre = "Teclado Mecanico"; catalogo[14].marca = "Logitech"; catalogo[14].precio = 250.00; catalogo[14].stock = 20; catalogo[14].activo = true;
    catalogo[15].codigo = 116; catalogo[15].nombre = "Mouse Inalambrico"; catalogo[15].marca = "Microsoft"; catalogo[15].precio = 80.00; catalogo[15].stock = 35; catalogo[15].activo = true;
    catalogo[16].codigo = 117; catalogo[16].nombre = "Disco Duro 1TB"; catalogo[16].marca = "WesternDigital"; catalogo[16].precio = 200.00; catalogo[16].stock = 40; catalogo[16].activo = true;
    catalogo[17].codigo = 118; catalogo[17].nombre = "SSD 500GB"; catalogo[17].marca = "Kingston"; catalogo[17].precio = 150.00; catalogo[17].stock = 30; catalogo[17].activo = true;
    catalogo[18].codigo = 119; catalogo[18].nombre = "Impresora L3250"; catalogo[18].marca = "Epson"; catalogo[18].precio = 650.00; catalogo[18].stock = 15; catalogo[18].activo = true;
    catalogo[19].codigo = 120; catalogo[19].nombre = "Tablet Tab S7"; catalogo[19].marca = "Samsung"; catalogo[19].precio = 2200.00; catalogo[19].stock = 8; catalogo[19].activo = true;

    // --- CELULARES Y AUDIO ---
    catalogo[20].codigo = 121; catalogo[20].nombre = "iPhone 13 128GB"; catalogo[20].marca = "Apple"; catalogo[20].precio = 3800.00; catalogo[20].stock = 10; catalogo[20].activo = true;
    catalogo[21].codigo = 122; catalogo[21].nombre = "Galaxy S22"; catalogo[21].marca = "Samsung"; catalogo[21].precio = 3500.00; catalogo[21].stock = 12; catalogo[21].activo = true;
    catalogo[22].codigo = 123; catalogo[22].nombre = "Redmi Note 11"; catalogo[22].marca = "Xiaomi"; catalogo[22].precio = 900.00; catalogo[22].stock = 25; catalogo[22].activo = true;
    catalogo[23].codigo = 124; catalogo[23].nombre = "Moto G60"; catalogo[23].marca = "Motorola"; catalogo[23].precio = 1100.00; catalogo[23].stock = 18; catalogo[23].activo = true;
    catalogo[24].codigo = 125; catalogo[24].nombre = "AirPods Pro"; catalogo[24].marca = "Apple"; catalogo[24].precio = 950.00; catalogo[24].stock = 15; catalogo[24].activo = true;
    catalogo[25].codigo = 126; catalogo[25].nombre = "Audifonos"; catalogo[25].marca = "Sony"; catalogo[25].precio = 150.00; catalogo[25].stock = 30; catalogo[25].activo = true;
    catalogo[26].codigo = 127; catalogo[26].nombre = "Parlante Charge 5"; catalogo[26].marca = "JBL"; catalogo[26].precio = 550.00; catalogo[26].stock = 20; catalogo[26].activo = true;
    catalogo[27].codigo = 128; catalogo[27].nombre = "Watch Series 7"; catalogo[27].marca = "Apple"; catalogo[27].precio = 1800.00; catalogo[27].stock = 8; catalogo[27].activo = true;
    catalogo[28].codigo = 129; catalogo[28].nombre = "Smartband 6"; catalogo[28].marca = "Xiaomi"; catalogo[28].precio = 180.00; catalogo[28].stock = 40; catalogo[28].activo = true;
    catalogo[29].codigo = 130; catalogo[29].nombre = "Powerbank 100mAh"; catalogo[29].marca = "Anker"; catalogo[29].precio = 120.00; catalogo[29].stock = 25; catalogo[29].activo = true;

    // --- LINEA BLANCA Y COCINA ---
    catalogo[30].codigo = 131; catalogo[30].nombre = "Refrigeradora"; catalogo[30].marca = "LG"; catalogo[30].precio = 2500.00; catalogo[30].stock = 6; catalogo[30].activo = true;
    catalogo[31].codigo = 132; catalogo[31].nombre = "Refri French Door"; catalogo[31].marca = "Samsung"; catalogo[31].precio = 4500.00; catalogo[31].stock = 3; catalogo[31].activo = true;
    catalogo[32].codigo = 133; catalogo[32].nombre = "Microondas 20L"; catalogo[32].marca = "Panasonic"; catalogo[32].precio = 350.00; catalogo[32].stock = 15; catalogo[32].activo = true;
    catalogo[33].codigo = 134; catalogo[33].nombre = "Licuadora 600W"; catalogo[33].marca = "Oster"; catalogo[33].precio = 150.00; catalogo[33].stock = 20; catalogo[33].activo = true;
    catalogo[34].codigo = 135; catalogo[34].nombre = "Batidora Pedestal"; catalogo[34].marca = "KitchenAid"; catalogo[34].precio = 1200.00; catalogo[34].stock = 4; catalogo[34].activo = true;
    catalogo[35].codigo = 136; catalogo[35].nombre = "Freidora de Aire"; catalogo[35].marca = "Philips"; catalogo[35].precio = 450.00; catalogo[35].stock = 12; catalogo[35].activo = true;
    catalogo[36].codigo = 137; catalogo[36].nombre = "Olla Arrocera"; catalogo[36].marca = "Oster"; catalogo[36].precio = 120.00; catalogo[36].stock = 25; catalogo[36].activo = true;
    catalogo[37].codigo = 138; catalogo[37].nombre = "Cafetera Electrica"; catalogo[37].marca = "Black&Decker"; catalogo[37].precio = 90.00; catalogo[37].stock = 18; catalogo[37].activo = true;
    catalogo[38].codigo = 139; catalogo[38].nombre = "Hervidor Inox"; catalogo[38].marca = "Thomas"; catalogo[38].precio = 70.00; catalogo[38].stock = 30; catalogo[38].activo = true;
    catalogo[39].codigo = 140; catalogo[39].nombre = "Horno Electrico"; catalogo[39].marca = "Mabe"; catalogo[39].precio = 280.00; catalogo[39].stock = 10; catalogo[39].activo = true;

    // --- LAVADO Y CLIMATIZACION ---
    catalogo[40].codigo = 141; catalogo[40].nombre = "Lavadora 15kg"; catalogo[40].marca = "LG"; catalogo[40].precio = 1400.00; catalogo[40].stock = 8; catalogo[40].activo = true;
    catalogo[41].codigo = 142; catalogo[41].nombre = "Lavaseca 12kg"; catalogo[41].marca = "Samsung"; catalogo[41].precio = 2200.00; catalogo[41].stock = 5; catalogo[41].activo = true;
    catalogo[42].codigo = 143; catalogo[42].nombre = "Aspiradora Robot"; catalogo[42].marca = "Roomba"; catalogo[42].precio = 1500.00; catalogo[42].stock = 6; catalogo[42].activo = true;
    catalogo[43].codigo = 144; catalogo[43].nombre = "Aspiradora Tacho"; catalogo[43].marca = "Karcher"; catalogo[43].precio = 400.00; catalogo[43].stock = 10; catalogo[43].activo = true;
    catalogo[44].codigo = 145; catalogo[44].nombre = "Plancha a Vapor"; catalogo[44].marca = "Philips"; catalogo[44].precio = 150.00; catalogo[44].stock = 20; catalogo[44].activo = true;
    catalogo[45].codigo = 146; catalogo[45].nombre = "Ventilador de Pie"; catalogo[45].marca = "Alfano"; catalogo[45].precio = 110.00; catalogo[45].stock = 30; catalogo[45].activo = true;
    catalogo[46].codigo = 147; catalogo[46].nombre = "Aire Acondicionado"; catalogo[46].marca = "LG"; catalogo[46].precio = 1800.00; catalogo[46].stock = 4; catalogo[46].activo = true;
    catalogo[47].codigo = 148; catalogo[47].nombre = "Estufa Electrica"; catalogo[47].marca = "Sole"; catalogo[47].precio = 350.00; catalogo[47].stock = 12; catalogo[47].activo = true;
    catalogo[48].codigo = 149; catalogo[48].nombre = "Termo Tanque 50L"; catalogo[48].marca = "Bosch"; catalogo[48].precio = 800.00; catalogo[48].stock = 7; catalogo[48].activo = true;
    catalogo[49].codigo = 150; catalogo[49].nombre = "Purificador Agua"; catalogo[49].marca = "Rotoplas"; catalogo[49].precio = 250.00; catalogo[49].stock = 15; catalogo[49].activo = true;

    
    cantidadProductos = 50; 
}

#endif
