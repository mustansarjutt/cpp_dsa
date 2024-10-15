#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create main window
    QWidget window;
    window.setWindowTitle("Sum Calculator");

    // Create widgets
    QLabel *label1 = new QLabel("Enter first number:");
    QLineEdit *lineEdit1 = new QLineEdit;
    QLabel *label2 = new QLabel("Enter second number:");
    QLineEdit *lineEdit2 = new QLineEdit;
    QPushButton *calculateButton = new QPushButton("Calculate");
    QLabel *resultLabel = new QLabel;

    // Create layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label1);
    layout->addWidget(lineEdit1);
    layout->addWidget(label2);
    layout->addWidget(lineEdit2);
    layout->addWidget(calculateButton);
    layout->addWidget(resultLabel);

    // Connect button click to calculate
    QObject::connect(calculateButton, &QPushButton::clicked, [&]() {
        bool ok1, ok2;
        double num1 = lineEdit1->text().toDouble(&ok1);
        double num2 = lineEdit2->text().toDouble(&ok2);
        if (ok1 && ok2) {
            double sum = num1 + num2;
            resultLabel->setText("Sum: " + QString::number(sum));
        } else {
            resultLabel->setText("Invalid input");
        }
    });

    // Set layout
    window.setLayout(layout);
    window.show();

    return app.exec();
}