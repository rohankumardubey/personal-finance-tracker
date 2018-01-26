#ifndef TYPE_FIELD_H
#define TYPE_FIELD_H

#include <field_input.h>

class TypeField : public FieldInput
{
public:
	TypeField();
	~TypeField();

	virtual std::string GetCurrentValue() const { return m_currentValue.SuggestionString; };
	virtual bool SetUserSearch(std::string &search);
	virtual void UseSuggestion(int n);

	Suggestion m_currentValue;

	void SetCurrentValue(Suggestion suggestion) { m_currentValue = suggestion; m_hasValue = true; }
	const Suggestion *GetCurrentSuggestion() const { return &m_currentValue; }

};

#endif /* TYPE_FIELD_H */