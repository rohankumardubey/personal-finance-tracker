#include <transaction_type.h>

TransactionType::TransactionType()
{
	m_id = 0;
	m_name = "";
}

TransactionType::~TransactionType()
{
}

void TransactionType::RegisterAttributes()
{
	RegisterAttribute(std::string("ID"), DataAttribute::TYPE_INT, (void *)&m_id);
	RegisterAttribute(std::string("NAME"), DataAttribute::TYPE_STRING, (void *)&m_name);
	RegisterAttribute(std::string("DESCRIPTION"), DataAttribute::TYPE_STRING, (void *)&m_description);
}