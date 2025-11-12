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