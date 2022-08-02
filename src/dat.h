#if !defined(DATA_INCLUDED)
# define DATA_INCLUDED
extern char version[6];
extern PLAYING_MODE mode;
extern int batch_mode;
extern int swindle_mode;
extern int call_flag;
extern int crafty_rating;
extern int opponent_rating;
extern const int time_used;
extern const int time_used_opponent;
extern const BITBOARD total_moves;
extern int initialized;
extern int early_exit;
extern int new_game;
extern char *AK_list[128];
extern char *GM_list[128];
extern char *IM_list[128];
extern char *C_list[128];
extern char *B_list[128];
extern char *SP_list[128];
extern char *SP_opening_filename[128];
extern char *SP_personality_filename[128];
extern FILE *input_stream;
extern FILE *book_file;
extern FILE *books_file;
extern FILE *normal_bs_file;
extern FILE *computer_bs_file;
extern FILE *history_file;
extern FILE *log_file;
extern FILE *auto_file;
extern FILE *book_lrn_file;
extern FILE *position_file;
extern FILE *position_lrn_file;
extern int log_id;
extern int output_format;
#if !defined(NOEGTB)
extern const int EGTBlimit;
extern const int EGTB_draw;
extern const int EGTB_search;
extern const int EGTB_use;
extern const void *EGTB_cache;
extern const size_t EGTB_cache_size;
extern const int EGTB_setup;
#endif
extern int DGT_active;
extern int to_dgt;
extern int from_dgt;
extern char kibitz_text[512];
extern int kibitz_depth;
extern const int done;
extern const int last_mate_score;
extern const int last_opponent_move;
extern const int average_nps;
extern const int incheck_depth;
extern const int onerep_depth;
extern const int recap_depth;
extern const int mate_depth;
extern const int null_min;
extern const int null_max;
extern int pgn_suggested_percent;
extern char pgn_event[32];
extern char pgn_date[32];
extern char pgn_round[32];
extern char pgn_site[32];
extern char pgn_white[64];
extern char pgn_white_elo[32];
extern char pgn_black[64];
extern char pgn_black_elo[32];
extern char pgn_result[32];
extern char log_filename[64];
extern char history_filename[64];
extern int number_of_solutions;
extern int solutions[10];
extern int solution_type;
extern const int draw_score[2];
extern const int abs_draw_score;
extern int accept_draws;
extern int offer_draws;
extern int adaptive_hash;
extern size_t adaptive_hash_min;
extern size_t adaptive_hash_max;
extern size_t adaptive_hashp_min;
extern size_t adaptive_hashp_max;
extern const int over;
extern int silent;
extern int ics;
extern int xboard;
extern int pong;
extern int channel;
extern char channel_title[32];
extern char book_path[128];
extern char personality_path[128];
extern char log_path[128];
extern char tb_path[128];
extern char rc_path[128];
extern char cmd_buffer[4096];
extern char *args[256];
extern char buffer[512];
extern int nargs;
extern int kibitz;
extern int move_number;
extern const int wtm;
extern int crafty_is_white;
extern const int iteration_depth;
extern const int last_search_value;
extern const int search_failed_high;
extern const int search_failed_low;
extern const int largest_positional_score;
extern const int lazy_eval_cutoff;
extern const int root_alpha;
extern const int root_beta;
extern const int last_root_value;
extern const int ponder_value;
extern const int root_value;
extern const int root_wtm;
extern int root_print_ok;
extern int move_actually_played;
extern const ROOT_MOVE root_moves[256];
extern const int n_root_moves;
extern const int nodes_per_second;
extern int analyze_mode;
extern int annotate_mode;
extern int test_mode;
extern int input_status;        /* 0=no input; 
                                   1=predicted move read;
                                   2=unpredicted move read;
                                   3=something read, not executed. */
extern signed char resign;
extern signed char resign_counter;
extern signed char resign_count;
extern signed char draw_counter;
extern signed char draw_count;
extern signed char draw_offer_pending;
extern char audible_alarm;
extern char speech;
extern char hint[512];
extern char book_hint[512];
extern const int post;
extern const int search_depth;
extern const unsigned int search_nodes;
extern int search_move;
extern int easy_move;
extern const int time_limit;
extern const int absolute_time_limit;
extern const int search_time_limit;
extern const int nodes_between_time_checks;
extern const int burp;
extern const int time_abort;
extern signed char pondering;   /* thinking on opponent's time     */
extern signed char thinking;    /* searching on its time           */
extern signed char puzzling;    /* puzzling about a move to ponder */
extern signed char booking;     /* searching, following book moves */
extern const int abort_search;
extern const int ponder;
extern const int ponder_move;
extern const int force;
extern const int ponder_moves[220];
extern const int num_ponder_moves;
extern char initial_position[80];
extern const unsigned int opponent_start_time, opponent_end_time;
extern const unsigned int program_start_time, program_end_time;
extern const unsigned int start_time, end_time;
extern const unsigned int elapsed_start, elapsed_end;
extern const int predicted;
extern const signed char transposition_id;
extern int ansi;
extern int trace_level;
extern const int max_threads;
extern const int min_thread_depth;
extern const int max_thread_group;
extern const int split_at_root;
extern int display_options;
extern unsigned int noise_level;
extern int book_move;
extern int moves_out_of_book;
extern int book_accept_mask;
extern int book_reject_mask;
extern int book_random;
extern float book_weight_freq;
extern float book_weight_eval;
extern float book_weight_learn;
extern float book_weight_CAP;
extern int book_search_trigger;
extern int book_selection_width;
extern int show_book;
extern int learning;
extern int learning_cutoff;
extern int learning_trigger;
extern int book_learn_eval[LEARN_INTERVAL];
extern int book_learn_depth[LEARN_INTERVAL];
extern int tc_moves;
extern int tc_time;
extern int tc_time_remaining;
extern int tc_time_remaining_opponent;
extern int tc_moves_remaining;
extern int tc_secondary_moves;
extern int tc_secondary_time;
extern int tc_increment;
extern int tc_sudden_death;
extern int tc_operator_time;
extern int tc_safety_margin;
extern const int trojan_check;
extern const int computer_opponent;
extern const int use_asymmetry;
extern int usage_level;
extern int log_hash;
extern int log_pawn_hash;
extern size_t hash_table_size;
extern size_t pawn_hash_table_size;
extern int hash_mask;
volatile int quit;
extern const unsigned int pawn_hash_mask;
extern const HASH_ENTRY *trans_ref;
extern PAWN_HASH_ENTRY *pawn_hash_table;
extern const HASH_ENTRY *trans_ref_orig;
extern const size_t cb_trans_ref;
extern const PAWN_HASH_ENTRY *pawn_hash_table_orig;
extern const size_t cb_pawn_hash_table;
extern const int p_values[15];
extern PATH last_pv;
extern const int last_value;
extern const char xlate[15];
extern const char empty[9];
extern const char square_color[64];
extern const int white_outpost[64];
extern const int black_outpost[64];
extern const int connected_passed_pawn_value[8];
extern const int hidden_passed_pawn_value[8];
extern const int passed_pawn_value[8];
extern const int blockading_passed_pawn_value[8];
extern const int isolated_pawn_value[9];
extern const int isolated_pawn_of_value[9];
extern const int doubled_pawn_value[9];
extern const int pawn_rams_v[9];
extern const int pawn_rams[9];
extern const int pawn_space[8];
extern const int supported_passer[8];
extern const int outside_passed[128];
extern const int majority[128];
extern const int temper[64];
extern const int temper_b[64], temper_w[64];
extern const int ttemper[64];
extern const int king_safety_asymmetry;
extern const int king_safety_scale;
extern const int king_safety_tropism;
extern const int blocked_scale;
extern const int pawn_scale;
extern const int passed_scale;
extern const int openf[4];
extern const int hopenf[4];
extern const int king_tropism_n[8];
extern const int king_tropism_b[8];
extern const int king_tropism_r[8];
extern const int king_tropism_at_r[8];
extern const int king_tropism_q[8];
extern const int king_tropism_at_q[8];
extern const int king_tropism[128];
extern const int tropism[128];
extern const int pval_w[64];
extern const int pval_b[64];
extern const int nval_w[64];
extern const int nval_b[64];
extern const int bval_w[64];
extern const int bval_b[64];
extern const int rval_w[64];
extern const int rval_b[64];
extern const int qval_w[64];
extern const int qval_b[64];
extern const int kval_wn[64];
extern const int kval_wk[64];
extern const int kval_wq[64];
extern const int kval_bn[64];
extern const int kval_bk[64];
extern const int kval_bq[64];
extern const int king_defects_w[64];
extern const int king_defects_b[64];
extern const int bishop_pair[9];
extern const char b_n_mate_dark_squares[64];
extern const char b_n_mate_light_squares[64];
extern const char mate[64];
extern const signed char directions[64][64];
extern const BITBOARD w_pawn_attacks[64];
extern const BITBOARD b_pawn_attacks[64];
extern const BITBOARD knight_attacks[64];
extern const BITBOARD bishop_attacks[64];
extern const BITBOARD bishop_attacks_rl45[64][64];
extern const BITBOARD bishop_attacks_rr45[64][64];
extern const BITBOARD rook_attacks_r0[64][64];
extern const BITBOARD rook_attacks_rl90[64][64];
extern const int bishop_mobility_rl45[64][64];
extern const int bishop_mobility_rr45[64][64];
extern const unsigned char bishop_shift_rl45[64];
extern const unsigned char bishop_shift_rr45[64];
extern const int rook_mobility_r0[64][64];
extern const int rook_mobility_rl90[64][64];
extern const BITBOARD rook_attacks[64];
extern const POSITION display;
extern const BITBOARD queen_attacks[64];
extern const BITBOARD king_attacks[64];
extern const BITBOARD obstructed[64][64];
extern const BITBOARD w_pawn_random[64];
extern const BITBOARD b_pawn_random[64];
extern const BITBOARD w_knight_random[64];
extern const BITBOARD b_knight_random[64];
extern const BITBOARD w_bishop_random[64];
extern const BITBOARD b_bishop_random[64];
extern const BITBOARD w_rook_random[64];
extern const BITBOARD b_rook_random[64];
extern const BITBOARD w_queen_random[64];
extern const BITBOARD b_queen_random[64];
extern const BITBOARD w_king_random[64];
extern const BITBOARD b_king_random[64];
extern const BITBOARD stalemate_sqs[64];
extern const BITBOARD edge_moves[64];
extern const BITBOARD enpassant_random[65];
extern const BITBOARD castle_random_w[2];
extern const BITBOARD castle_random_b[2];
extern const BITBOARD wtm_random[2];
extern const BITBOARD clear_mask[65];
extern const BITBOARD clear_mask_rl90[65];
extern const BITBOARD clear_mask_rl45[65];
extern const BITBOARD clear_mask_rr45[65];
extern const BITBOARD set_mask[65];
extern const BITBOARD set_mask_rl90[65];
extern const BITBOARD set_mask_rl45[65];
extern const BITBOARD set_mask_rr45[65];
extern const BITBOARD file_mask[8];
extern const BITBOARD rank_mask[8];
extern const BITBOARD right_side_mask[8];
extern const BITBOARD left_side_mask[8];
extern const BITBOARD right_side_empty_mask[8];
extern const BITBOARD left_side_empty_mask[8];
extern const BITBOARD mask_efgh, mask_fgh, mask_abc, mask_abcd;
extern const BITBOARD mask_abs7_w, mask_abs7_b;
extern const BITBOARD mask_advance_2_w;
extern const BITBOARD mask_advance_2_b;
extern const BITBOARD mask_left_edge;
extern const BITBOARD mask_right_edge;
extern const BITBOARD mask_not_edge;
extern const BITBOARD mask_WBT;
extern const BITBOARD mask_BBT;
extern const BITBOARD mask_A3B3;
extern const BITBOARD mask_B3C3;
extern const BITBOARD mask_F3G3;
extern const BITBOARD mask_G3H3;
extern const BITBOARD mask_A6B6;
extern const BITBOARD mask_B6C6;
extern const BITBOARD mask_F6G6;
extern const BITBOARD mask_G6H6;
extern const BITBOARD mask_white_OO;
extern const BITBOARD mask_white_OOO;
extern const BITBOARD mask_black_OO;
extern const BITBOARD mask_black_OOO;
extern const BITBOARD mask_kr_trapped_w[3];
extern const BITBOARD mask_qr_trapped_w[3];
extern const BITBOARD mask_kr_trapped_b[3];
extern const BITBOARD mask_qr_trapped_b[3];
extern const BITBOARD good_bishop_kw;
extern const BITBOARD good_bishop_qw;
extern const BITBOARD good_bishop_kb;
extern const BITBOARD good_bishop_qb;
extern const BITBOARD light_squares;
extern const BITBOARD dark_squares;
extern const BITBOARD not_rook_pawns;
extern const BITBOARD plus1dir[65];
extern const BITBOARD plus7dir[65];
extern const BITBOARD plus8dir[65];
extern const BITBOARD plus9dir[65];
extern const BITBOARD minus1dir[65];
extern const BITBOARD minus7dir[65];
extern const BITBOARD minus8dir[65];
extern const BITBOARD minus9dir[65];
extern const BITBOARD mask_eptest[64];
# if !defined(ALPHA)
extern const BITBOARD mask_1;
extern const BITBOARD mask_2;
extern const BITBOARD mask_3;
extern const BITBOARD mask_8;
extern const BITBOARD mask_16;
extern const BITBOARD mask_112;
extern const BITBOARD mask_120;
# endif
extern const BITBOARD mask_clear_entry;
# if !defined(_M_AMD64) && !defined(INLINE_ASM)
extern const unsigned char first_one[65536];
extern const unsigned char last_one[65536];
# endif
extern const unsigned char first_one_8bit[256];
extern const unsigned char last_one_8bit[256];
extern const unsigned char pop_cnt_8bit[256];
extern const unsigned char connected_passed[256];
extern const unsigned char file_spread[256];
extern const signed char is_outside[256][256];
extern const signed char is_outside_c[256][256];
extern const BITBOARD mask_pawn_protected_b[64];
extern const BITBOARD mask_pawn_protected_w[64];
extern const BITBOARD mask_pawn_duo[64];
extern const BITBOARD mask_pawn_isolated[64];
extern const BITBOARD mask_pawn_passed_w[64];
extern const BITBOARD mask_pawn_passed_b[64];
extern const BITBOARD mask_no_pattacks_w[64];
extern const BITBOARD mask_no_pattacks_b[64];
extern const BITBOARD white_minor_pieces;
extern const BITBOARD black_minor_pieces;
extern const BITBOARD white_pawn_race_wtm[64];
extern const BITBOARD white_pawn_race_btm[64];
extern const BITBOARD black_pawn_race_wtm[64];
extern const BITBOARD black_pawn_race_btm[64];
extern const BOOK_POSITION book_buffer[BOOK_CLUSTER_SIZE];
extern const BOOK_POSITION books_buffer[BOOK_CLUSTER_SIZE];
# if defined(SMP)
extern const TREE *local[MAX_BLOCKS + 1];
extern const TREE *volatile thread[CPUS];
extern const lock_t lock_smp, lock_io, lock_root;
extern const volatile int smp_idle;
extern const volatile int smp_threads;
extern const volatile int initialized_threads;
# if defined(POSIX)
extern const pthread_attr_t pthread_attr;
# endif
# else
extern const TREE local_data[1], *local[1];
# endif
extern const unsigned int parallel_splits;
extern const unsigned int parallel_stops;
extern const unsigned int max_split_blocks;
extern const volatile unsigned int splitting;
#if !defined(NOEGTB)
extern const int cbEGTBCompBytes;
#endif
#endif
extern const int pawn_value;
extern const int knight_value;
extern const int bishop_value;
extern const int rook_value;
extern const int queen_value;
extern const int king_value;
extern const int bad_trade;
extern const int eight_pawns;
extern const int pawns_blocked;
extern const int center_pawn_unmoved;
extern const int pawn_can_promote;
extern const int bad_trade;
extern const int eight_pawns;
extern const int pawns_blocked;
extern const int center_pawn_unmoved;
extern const int pawn_duo;
extern const int pawn_jam;
extern const int pawn_weak_p1;
extern const int pawn_weak_p2;
extern const int pawn_protected_passer_wins;
extern const int won_kp_ending;
extern const int split_passed;
extern const int pawn_base[8];
extern const int pawn_advance[8];
extern const int king_king_tropism;
extern const int bishop_trapped;
extern const int bishop_plus_pawns_on_color;
extern const int bishop_over_knight_endgame;
extern const int bishop_mobility;
extern const int bishop_king_safety;
extern const int rook_on_7th;
extern const int rook_absolute_7th;
extern const int rook_connected_7th_rank;
extern const int rook_open_file[8];
extern const int rook_half_open_file[8];
extern const int rook_behind_passed_pawn;
extern const int rook_trapped;
extern const int rook_limited;
extern const int queen_rook_on_7th_rank;
extern const int queen_king_safety;
extern const int queen_vs_2_rooks;
extern const int queen_is_strong;
extern const int queen_offside_tropism;
extern const int king_safety_mate_g2g7;
extern const int king_safety_mate_threat;
extern const int king_safety_stonewall;
extern const int king_safety_open_file;
extern const int castle_opposite;
extern const int development_thematic;
extern const int development_unmoved;
extern const int blocked_center_pawn;
extern const int development_losing_castle;
extern const int development_not_castled;
extern const int development_queen_early;
extern const int development_castle_bonus;
extern const int *evalterm_value[256];
extern const char *evalterm_description[256];
extern const int evalterm_size[256];
