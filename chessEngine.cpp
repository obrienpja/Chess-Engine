#include <iostream>
#include <utility>
#include <vector>


class Square
{
  // char fileLabel;
  // int rank;
  std::pair<char, int> square;

  public:
    Square(){};
    Square(char fileLabel, int rank)
    {
      square.first = fileLabel;
      square.second = rank;
    }

    void setFile(char file)
    {
      square.first = file;
    };

    void setRank(int rank)
    {
      square.second = rank;
    };

    char getFile()
    {
      return square.first;
    };

    int getRank()
    {
      return square.second;
    };

};


class ChessPiece
{
  int worth;
  Square sq;

  public:
    void setWorth(int worth){this -> worth = worth;};
    int getWorth(){return worth;};
    ChessPiece(char file, int rank)
    {
      sq.setFile(file);
      sq.setRank(rank);
    }

    char getFile()
    {
      return sq.getFile();
    }

    int getRank()
    {
      return sq.getRank();
    }

    void setFile(char file)
    {
      sq.setFile(file);
    }

    void setRank(int rank)
    {
      sq.setRank(rank);
    }

    void move(){};
    // void setSquare();
    // virtual int getCurrentSquare();
};


// class King: public ChessPiece
// {
//   public:
//     King()
//     {
//       this -> setWorth(0);
//     }
// };


class Pawn: public ChessPiece
{

  public:
    // Pawn()
    // {
    //   this -> setWorth(1);
    // }
    Pawn(char pfile, int prank):ChessPiece(pfile, prank)
    {
      this -> setWorth(1);
    };

    void move(){this -> setRank(this -> getRank() + 1);};
};


// class Knight: public ChessPiece
// {
//   public:
//     Knight()
//     {
//       this -> setWorth(3);
//     }
//     // setStartSquare();
// };
//
//
// class Bishop: public ChessPiece
// {
//   public:
//     Bishop()
//     {
//       this -> setWorth(3);
//     }
// };
//
//
// class Rook: public ChessPiece
// {
//   public:
//     Rook()
//     {
//       this -> setWorth(5);
//     }
// };
//
//
// class Queen: public ChessPiece
// {
//   public:
//     Queen()
//     {
//       this -> setWorth(9);
//     }
// };
//
//
// class PieceSet
// {
//   ChessPiece startingSet[16];
//   int materialCount;
//   int position;
// };
//
//
// class ChessGame
// {
//   PieceSet startingSets[2];
// };

int main()
{
  // King K;
  std::vector<Pawn> whitePawns, blackPawns;
  // Knight N;
  // Bishop B;
  // Rook R;
  // Queen Q;

  // std::cout << "The king value is: " << K.getWorth() << std::endl;

  // std::cout << "The knight value is: " << N.getWorth() << std::endl;
  // std::cout << "The bishop value is: " << B.getWorth() << std::endl;
  // std::cout << "The rook value is: " << R.getWorth() << std::endl;
  // std::cout << "The queen value is: " << Q.getWorth() << std::endl;

  for(char i= 'a'; i!='i'; i++)
    whitePawns.push_back(Pawn(i, 2));

  for(char i= 'a'; i!='i'; i++)
    blackPawns.push_back(Pawn(i, 7));

  for(std::vector<Pawn>::iterator i = whitePawns.begin(); i != whitePawns.end(); i++)
    std::cout << "The pawn's square is: " << i -> getFile() << i -> getRank() << std::endl;

  whitePawns.at(0).move();

  std::cout << "Pawn moved?" << whitePawns.at(0).getFile() << whitePawns.at(0).getRank() << std::endl;

  for(std::vector<Pawn>::iterator i = whitePawns.begin(); i != whitePawns.end(); i++)
    std::cout << "The pawn's square is: " << i -> getFile() << i -> getRank() << std::endl;
}
