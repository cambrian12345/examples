#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QErrorMessage;

class Dialog : public QDialog
{
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);

private slots:
    void setInteger();
    void setDouble();
    void setItem();
    void setText();
    void setColor();
    void setFont();
    void setExistingDirectory();
    void setOpenFileName();
    void setOpenFileNames();
    void setSaveFileName();
    void criticalMessage();
    void infomationMessage();
    void questionMessage();
    void warningmessage();
    void errorMessage();

private:
    QCheckBox *native;
    QLabel *integerLabel;
    QLabel *doubleLabel;
    QLabel *itemLabel;
    QLabel *textLabel;
    QLabel *colorLabel;
    QLabel *fontLabel;
    QLabel *directoryLabel;
    QLabel *openFileNameLabel;
    QLabel *openFileNamesLabel;
    QLabel *saveFileNameLabel;
    QLabel *criticalLabel;
    QLabel *infomationLabel;
    QLabel *quwstionLabel;
    QLabel *warningLabel;
    QLabel *errorLabel;
    QErrorMessage *errorMessageDialog;

    QString openFilePath;
};

#endif // DIALOG_H
