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