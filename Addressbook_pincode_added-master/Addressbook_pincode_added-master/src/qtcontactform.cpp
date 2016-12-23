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

    addRow("<font color='blue'>First Name", firstNameField);
    addRow("<font color='red'>Last Name", lastNameField);
    addRow("<font color='violet'>Address", addressField);
    addRow("<font color='purple'>Pincode", pincodeField);
    addRow("<font color='orange'>Phone Number", phoneNumberField);
    addRow("<font color='sky blue'>Email", emailField);
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
