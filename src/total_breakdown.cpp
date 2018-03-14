#include <total_breakdown.h>

#include <string>

TotalBreakdown::TotalBreakdown()
{
	m_children = NULL;
	m_amounts = NULL;
	m_class = 0;
	m_childCount = 0;
}

TotalBreakdown::~TotalBreakdown()
{
	delete[] m_children;
	delete[] m_amounts;
	delete[] m_budgets;
}