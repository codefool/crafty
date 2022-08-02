#if !defined(EVALUATE_INCLUDED)
#  define    EVALUATE_INCLUDED
 
#  define                            BAD_TRADE         (160)
#  define                          EIGHT_PAWNS          (10)
#  define                        PAWNS_BLOCKED          (12)
#  define                  CENTER_PAWN_UNMOVED          (16)
#  define                             PAWN_DUO           (2)
#  define                             PAWN_JAM          (10)
#  define                         PAWN_WEAK_P1          (12)
#  define                         PAWN_WEAK_P2          (20)
#  define           PAWN_PROTECTED_PASSER_WINS          (50)
#  define                        WON_KP_ENDING         (150)
 
#  define                          PAWN_BASE_A           (0)
#  define                          PAWN_BASE_B           (3)
#  define                          PAWN_BASE_C           (6)
#  define                          PAWN_BASE_D           (9)
#  define                          PAWN_BASE_E           (9)
#  define                          PAWN_BASE_F           (6)
#  define                          PAWN_BASE_G           (3)
#  define                          PAWN_BASE_H           (0)

#  define                       PAWN_ADVANCE_A           (3)
#  define                       PAWN_ADVANCE_B           (3)
#  define                       PAWN_ADVANCE_C           (3)
#  define                       PAWN_ADVANCE_D           (3)
#  define                       PAWN_ADVANCE_E           (3)
#  define                       PAWN_ADVANCE_F           (3)
#  define                       PAWN_ADVANCE_G           (3)
#  define                       PAWN_ADVANCE_H           (3)
 
#  define                    PAWN_ADVANCE_EG_A           (3)
#  define                    PAWN_ADVANCE_EG_B           (3)
#  define                    PAWN_ADVANCE_EG_C           (3)
#  define                    PAWN_ADVANCE_EG_D           (3)
#  define                    PAWN_ADVANCE_EG_E           (3)
#  define                    PAWN_ADVANCE_EG_F           (3)
#  define                    PAWN_ADVANCE_EG_G           (3)
#  define                    PAWN_ADVANCE_EG_H           (3)

#  define            PAWN_CONNECTED_PASSED_6TH         (100)

#  define                    KING_KING_TROPISM          (15)
  
#  define                       BISHOP_TRAPPED         (175)
#  define           BISHOP_PLUS_PAWNS_ON_COLOR           (4)
#  define           BISHOP_OVER_KNIGHT_ENDGAME          (30)
#  define                      BISHOP_MOBILITY           (3)
#  define                   BISHOP_KING_SAFETY          (10)
  
#  define                          ROOK_ON_7TH          (30)
#  define                    ROOK_ABSOLUTE_7TH          (20)
#  define              ROOK_CONNECTED_7TH_RANK          (16)
#  define                       ROOK_OPEN_FILE          (24)
#  define                  ROOK_HALF_OPEN_FILE           (5)
#  define             ROOK_CONNECTED_OPEN_FILE          (10)
#  define              ROOK_BEHIND_PASSED_PAWN          (40)
#  define                         ROOK_TRAPPED          (30)
#  define                         ROOK_LIMITED          (20)
  
#  define               QUEEN_ROOK_ON_7TH_RANK          (10)
#  define                    QUEEN_KING_SAFETY           (6)
#  define                     QUEEN_VS_2_ROOKS          (50)
#  define                      QUEEN_IS_STRONG          (30)
#  define                QUEEN_OFFSIDE_TROPISM           (8)
 
#  define                KING_SAFETY_MATE_G2G7           (3)
#  define              KING_SAFETY_MATE_THREAT         (600)
#  define                       KING_BACK_RANK          (12)
#  define                KING_SAFETY_STONEWALL           (7)
#  define                KING_SAFETY_OPEN_FILE           (4)
#  define                      CASTLE_OPPOSITE           (5)
 
 
#  define                 DEVELOPMENT_THEMATIC           (6)
#  define                  DEVELOPMENT_UNMOVED           (7)
#  define                  BLOCKED_CENTER_PAWN          (12)
#  define            DEVELOPMENT_LOSING_CASTLE          (20)
#  define              DEVELOPMENT_NOT_CASTLED          (24)
#  define              DEVELOPMENT_QUEEN_EARLY          (12)
 
#endif
