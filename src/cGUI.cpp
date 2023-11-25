
#include "app.h"
#include <wex.h>
#include "cGUI.h"

cGUI::cGUI(
    const std::string &title,
    const std::vector<int> &vlocation)
    : fm(wex::maker::make())
{
    generate();
    calculate();
    std::cout << cObj::text() << "\n";
    std::cout << cOutput::text();

    fm.move(vlocation);
    fm.text(title);

    fm.events().draw(
        [&](PAINTSTRUCT &ps)
        {
            wex::shapes S(ps);
            draw(S);
        });

    fm.show();
    fm.run();
}