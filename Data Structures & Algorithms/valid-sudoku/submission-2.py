class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:


        seen=set()

        for r in range(9):
            for c in range(9):
                num=board[r][c]

                if num==".":
                    continue
                
                row=("row",num,r)
                col=("col", num, c)
                box=("box", num, r//3, c//3)

                if row in seen or col in seen or box in seen:
                    return False

                seen.add(row)
                seen.add(col)
                seen.add(box)
        
        return True

