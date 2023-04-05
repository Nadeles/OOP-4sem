#include<iostream>
#include<string>
using namespace std;

void SendSms(const string& number, const string& message) {
	cout << "Send '" << message << "' to number " << number << endl;
}

void SendEmail(const string& email, const string& message) {
	cout << "Send '" << message << "' to e-mail " << email << endl;
}


class INotifier {
	public:
		INotifier(const string& message) : message_(message) {}
		virtual void Notify(const string& message) const = 0;

	protected:			
		const string message_;	
};
	

class SmsNotifier : public INotifier{
	public:
    		SmsNotifier(const string& number) : INotifier(message_), number_(number){}
		
		void Notify(const string& message) const override {
			SendSms(number_, message);
		}
	private:
		const string number_;		
};


class EmailNotifier : public INotifier{
	public:
		EmailNotifier(const string& email) : INotifier(message_), email_(email) {}
		void Notify(const string& message) const override {
			SendEmail(email_, message);
		}
	private:
		const string email_;
};


void Notify(INotifier& notifier, const string& message) {
		notifier.Notify(message);	
}


int main() {
	SmsNotifier sn("+7-(999)-999-99-99");
	const string Smsg = "Hello World(sms)!";

	EmailNotifier en("artem-lukanin@phystech.edu");
	const string Emsg = "Hello World(e-mail)!";

	Notify(sn, Smsg);
	Notify(en, Emsg);
	return 0;
}
