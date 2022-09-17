import sys
import chess

board = chess.Board()
if len(sys.argv) != 1:
    for i in sys.argv[1].split(","):
        if len(i):
            board.push(chess.Move.from_uci(i))

legal_moves = list(board.legal_moves)
moves = ""
for i in range(len(legal_moves)):
    moves += str(legal_moves[i]) + ","
print(moves)
print(board.is_check(), end=" ")
print(board.is_checkmate(), end="")
