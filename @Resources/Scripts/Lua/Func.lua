-- ============================================================
--  NuraShade Lua Script
--  Copyright (c) 2025 NuraShade
--
--  Licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
--  You are free to:
--    • Share — copy and redistribute the material in any medium or format
--    • Adapt — remix, transform, and build upon the material
--      for any purpose, even commercially.
--
--  Under the following terms:
--    • Attribution — You must give appropriate credit, provide a link to the license,
--      and indicate if changes were made.
--    • ShareAlike — If you remix, transform, or build upon the material,
--      you must distribute your contributions under the same license as the original.
--
--  License Details: https://creativecommons.org/licenses/by-sa/3.0/
-- ============================================================
--[[
    Function: trimText
    Description:
        Replaces text in a string based on a pattern.
        It uses Lua's gsub() function, which performs a global substitution.

    Parameters:
        Text    - The input string you want to modify.
        Match   - The pattern or substring to search for.
        Replace - The replacement text or pattern.

    Returns:
        A new string where all occurrences of 'Match' in 'Text'
        are replaced with 'Replace'.
]]
function trimText(Text, Match, Replace)
	return Text:gsub(Match, Replace)
end

--[[
    Function: getIconStyle
    Description:
        Determines whether a section should be displayed as "Filled" or "Outlined"
        based on whether the section name ends with the same number as the
        provided current page index.

    Parameters:
        sectionName       - The name of the section (e.g., "Page_Content_Background_2").
        currentPageIndex  - The current active page index to compare with.

    Returns:
        "Filled"   - If the number at the end of 'sectionName' matches 'currentPageIndex'.
        "Outlined" - Otherwise.
]]
function getIconStyle(sectionName, currentPageIndex)
    -- Extract number at the end of the section name
    local sectionNumber = tonumber(string.match(sectionName, "_(%d+)$"))

    -- Compare and return result
    if sectionNumber == currentPageIndex then
        return "Filled"
    else
        return "Outlined"
    end
end
