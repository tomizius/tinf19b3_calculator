//
// Created by herrlevin_ on 6/12/20.
//

#include <QtWidgets>
#include "../ui/calculator.h"

#ifndef CALCULATOR_CALCULATORGUI_H
#define CALCULATOR_CALCULATORGUI_H

#endif //CALCULATOR_CALCULATORGUI_H

class CalculatorGUI : public QWidget {
    Q_OBJECT

public:
    CalculatorGUI(QWidget *parent = nullptr);
    ~CalculatorGUI();

private:
    Ui::Form *ui;


private slots:
    void decimalClicked();
/*    void commaClicked();
    void additionClicked();
    void divisionClicked();
    void subtractionClicked();
    void multiplicationClicked();
    void rootClicked();
    void expClicked();
    void equalClicked();
    void clearClicked();*/
};