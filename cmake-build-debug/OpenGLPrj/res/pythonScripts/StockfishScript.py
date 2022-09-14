import sys
from stockfish import Stockfish

stockfish = Stockfish(path='../stockfish/stockfish.exe')
stockfish.set_position(sys.argv[1].split(","))
print(stockfish.get_best_move())
