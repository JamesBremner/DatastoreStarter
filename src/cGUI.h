#pragma once

class cGUI
{
public:
    cGUI(
        const std::string &title,
        const std::vector<int> &vlocation);

    /** Draw nothing
     * 
     * An application should over-ride this method
     * to perform any drawing reuired
     */
    virtual void draw( wex::shapes& S )
    {

    }

protected:
    wex::gui &fm;
};