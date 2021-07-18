#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_7774286080190926812);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_4840928901255275931);
void car_H_mod_fun(double *state, double *out_2589938056628881610);
void car_f_fun(double *state, double dt, double *out_4480227765543357581);
void car_F_fun(double *state, double dt, double *out_2469217242969257698);
void car_h_25(double *state, double *unused, double *out_7817857624510514042);
void car_H_25(double *state, double *unused, double *out_6018009411772908810);
void car_h_24(double *state, double *unused, double *out_4473412493552802521);
void car_H_24(double *state, double *unused, double *out_8148699389951707709);
void car_h_30(double *state, double *unused, double *out_7542663562226008153);
void car_H_30(double *state, double *unused, double *out_3595889499176274470);
void car_h_26(double *state, double *unused, double *out_5902407243822697818);
void car_H_26(double *state, double *unused, double *out_6724141506997433533);
void car_h_27(double *state, double *unused, double *out_1715338188777319652);
void car_H_27(double *state, double *unused, double *out_4883471487012899782);
void car_h_29(double *state, double *unused, double *out_8486173415127670588);
void car_H_29(double *state, double *unused, double *out_7419688268305106423);
void car_h_28(double *state, double *unused, double *out_7412061908754207767);
void car_H_28(double *state, double *unused, double *out_1130866911715212843);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}