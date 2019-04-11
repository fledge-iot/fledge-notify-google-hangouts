#ifndef _HANGOUTS_H
#define _HANGOUTS_H
#include <config_category.h>
#include <string>
#include <logger.h>

/**
 * A simple Google Hangouts notification class that sends a message
 * via a Hangouts webhook URL
 */
class Hangouts {
	public:
		Hangouts(ConfigCategory *config);
		~Hangouts();
		void	notify(const std::string& notificationName, const std::string& triggerReason, const std::string& message);
		void	reconfigure(const std::string& newConfig);
	private:
		std::string	m_url;
		std::string	m_text;
};
#endif
