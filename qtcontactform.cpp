#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        pincodeField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow("<font color='blue'>First Name</font>", firstNameField);
    addRow("<font color='blue'>Last Name</font>", lastNameField);
    addRow("<font color='green'>Address</font>", addressField);
     addRow("<font color='green'>Pincode</font>", pincodeField);
    addRow("<font color='red'>Phone Number</font>", phoneNumberField);
    addRow("<font color='red'>Email</font>", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    pincodeField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
