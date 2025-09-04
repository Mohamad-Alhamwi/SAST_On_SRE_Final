
void FUN_001037ae(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103985(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103c6c(void)

{
  return;
}




void FUN_0010395a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010309b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103247(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101b74(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eb4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103575(param_1,param_2,param_3);
  return;
}




void FUN_001031c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103370(param_2);
  uVar2 = FUN_00103370(param_1);
  FUN_00103382(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103d5e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d27,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00101bc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ed6(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_001027ba(undefined8 param_1)

{
  return param_1;
}




void FUN_00102860(undefined8 param_1)

{
  FUN_00102cc6(param_1);
  return;
}




undefined8 * FUN_00103440(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_0010272c(void)

{
  return;
}




undefined8 FUN_00102ae0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f31(param_1,param_2);
  }
  return uVar1;
}




void FUN_001033f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034e1(param_2);
  uVar2 = FUN_001034e1(param_1);
  FUN_00103507(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_00103329(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00101ada(long *param_1)

{
  FUN_00101e3a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a2e(param_1);
  return;
}




void FUN_00103507(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e56(param_3);
  uVar2 = FUN_00102e56(local_28);
  uVar3 = FUN_00102e56(local_20);
  uVar1 = FUN_001035ed(uVar3,uVar2,uVar1);
  FUN_001030d0(&local_30,uVar1);
  return;
}




void FUN_001014e9(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a6e(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010151e to 0010160c has its CatchHandler @ 00101658 */
  local_68 = operator_new(8);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68,8);
  }
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  FUN_00101cb8(local_38,local_58);
                    /* try { // try from 00101614 to 00101618 has its CatchHandler @ 00101643 */
  FUN_00103685(local_38);
  FUN_00101b2c(local_38);
  FUN_00101b2c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103b4a(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101682(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a6e(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001016b7 to 0010178f has its CatchHandler @ 001017db */
  local_68 = operator_new(8);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  FUN_00101cb8(local_38,local_58);
                    /* try { // try from 00101797 to 0010179b has its CatchHandler @ 001017c6 */
  FUN_001036c6(local_38);
  FUN_00101b2c(local_38);
  FUN_00101b2c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101805(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a6e(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010183a to 00101928 has its CatchHandler @ 00101974 */
  local_68 = operator_new(8);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68,8);
  }
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b74(local_58);
  FUN_00101bc4(local_38,&local_60);
  FUN_00101bf2(local_58,local_38[0],1,&local_68);
  FUN_00101cb8(local_38,local_58);
                    /* try { // try from 00101930 to 00101934 has its CatchHandler @ 0010195f */
  FUN_00103707(local_38);
  FUN_00101b2c(local_38);
  FUN_00101b2c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ca3(void)

{
  return;
}




void FUN_00102fac(void)

{
  return;
}




void FUN_00102b9c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fac(param_1,param_2);
  return;
}




void FUN_001039b3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001024f0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101eb4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102edc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025ce(param_1);
  FUN_00103117(uVar1);
  return;
}




undefined8 FUN_00102e56(undefined8 param_1)

{
  return param_1;
}




void FUN_001029bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ea6(param_1,param_2,param_3);
  return;
}




void FUN_00103cfb(void)

{
  return;
}




undefined8 FUN_00103370(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00102bfc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ae0(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103ccf(void)

{
  return;
}




void FUN_00103c77(void)

{
  return;
}




void * FUN_00103622(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001038ad(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001038d8(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103ea9(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




ulong FUN_00103a46(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103358(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103382(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e56(param_3);
  uVar2 = FUN_0010348b(local_28);
  uVar3 = FUN_0010348b(local_20);
  uVar1 = FUN_001034ac(uVar3,uVar2,uVar1);
  FUN_001030d0(&local_30,uVar1);
  return;
}




void FUN_0010291a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dd6(param_2);
  uVar2 = FUN_00102dd6(param_1);
  FUN_00102de8(uVar2,uVar1,param_3);
  return;
}




void FUN_00101a4e(undefined8 param_1)

{
  FUN_00101a8e(param_1);
  return;
}




void FUN_00103756(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101e74(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ea6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e6(param_1,param_2,param_3);
  return;
}




void FUN_001025e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bc6(param_1,param_3);
                    /* try { // try from 0010261a to 0010261e has its CatchHandler @ 00102621 */
  FUN_00102bfc(param_1,param_2);
  return;
}




void FUN_001037d6(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103d27(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103117(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010330b(param_1);
  puVar1 = (undefined8 *)FUN_00103329(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103180(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103358(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102fbf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031c6(param_1,param_2,param_3);
  return;
}




void FUN_00103216(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033f0(param_1,param_2,param_3);
  return;
}




void FUN_00103c61(void)

{
  return;
}




long FUN_00102556(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103c82(void)

{
  return;
}




undefined8 FUN_00102d55(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103048(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103685(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103732(param_1,2);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,8);
  }
  return;
}




undefined8 FUN_00101a18(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_001019b3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103756("Calling good()...");
  FUN_0010199e();
  FUN_00103756("Finished good()");
  FUN_00103756("Calling bad()...");
  FUN_001014e9();
  FUN_00103756("Finished bad()");
  return 0;
}




void FUN_001039e6(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001030d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104000(void)

{
  return;
}




undefined8 FUN_0010348b(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027ba(&local_10);
  return *puVar1;
}




void FUN_00102ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cdc(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a18(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101e86(undefined8 param_1,undefined8 param_2)

{
  FUN_0010276d(param_1,param_2);
  return;
}




void FUN_001026f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c56(param_1,param_2,param_3);
  return;
}




void * FUN_00103575(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103c29(void)

{
  return 1;
}




void FUN_0010382c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00103732(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00103f60(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101e3a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010273b(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101f84(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_001029f0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024a4(local_80);
      local_60 = FUN_0010287e(&local_88,&local_78);
      local_70 = FUN_00102ae0(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e74(local_80);
                    /* try { // try from 0010228e to 00102319 has its CatchHandler @ 001023d1 */
      FUN_001029bb(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e74(local_80);
      puVar2 = (undefined8 *)FUN_00101ed6(&local_88);
      local_70 = FUN_00102b17(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e74(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ed6(&local_88);
      local_70 = FUN_00102b17(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e74(local_80);
      FUN_00101e86(*local_80,local_80[1],uVar1);
      FUN_00101e3a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027cc(local_38,param_1,param_4);
                    /* try { // try from 0010200e to 001021e1 has its CatchHandler @ 001023b3 */
      local_50 = FUN_00102860(local_38);
      local_78 = FUN_00101b74(local_80);
      local_48 = FUN_0010287e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e74(local_80);
        FUN_001028c2(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ed6(&local_88);
        FUN_0010291a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ed6(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ed6(&local_88);
        FUN_0010296a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e74(local_80);
        lVar4 = FUN_001029bb(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e74(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ed6(&local_88);
        FUN_001028c2(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ed6(&local_88);
        FUN_0010296a(*puVar2,local_40,local_50);
      }
      FUN_0010282c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101ee8(param_1);
  local_18 = FUN_00101f3f(&local_38,&local_20);
  local_20 = FUN_001024a4(local_30);
  uVar1 = FUN_001024f0(&local_20,local_18);
  FUN_00101f84(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024a4(local_30);
  FUN_001024f0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ce5(void)

{
  return;
}




undefined8 FUN_0010269e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102798(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e56(param_1);
  uVar1 = FUN_00103440(uVar1,param_2,param_3);
  FUN_001030d0(&local_10,uVar1);
  return;
}




undefined8 FUN_00102b6f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b9c(param_1,param_2);
  return param_1;
}




void FUN_00101e2a(void)

{
  return;
}




void FUN_00103066(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103216(param_1,param_2,param_3);
  return;
}




void FUN_00103882(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_00101f3f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027ba(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027ba(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101a2e(undefined8 param_1)

{
  FUN_00101aba(param_1);
  return;
}




void FUN_0010273b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c8c(param_1,param_2,param_3);
  return;
}




void FUN_00103d11(void)

{
  return;
}




void FUN_00103c8d(void)

{
  return;
}




void FUN_001036c6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103732(param_1,2);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,8);
  }
  return;
}




void FUN_00101a8e(undefined8 param_1)

{
  FUN_00101dd8(param_1);
  FUN_00101df8(param_1);
  return;
}




ulong * FUN_00102f02(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_00103247(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103932(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




undefined8 FUN_001025ce(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c8c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101a6e(undefined8 param_1)

{
  FUN_00101a4e(param_1);
  return;
}




void FUN_00102c56(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fbf(param_1,param_2,param_3);
  return;
}




void FUN_00101df8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103f22(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101eb4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001034e1(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035d8(&local_10);
  FUN_00102dd6(uVar1);
  return;
}




void FUN_00102de8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102e56(param_3);
  uVar2 = FUN_00102e56(local_28);
  uVar3 = FUN_00102e56(local_20);
  uVar1 = FUN_0010309b(uVar3,uVar2,uVar1);
  FUN_001030d0(&local_30,uVar1);
  return;
}




void FUN_00103cc4(void)

{
  return;
}




void FUN_00103d06(void)

{
  return;
}




undefined8 FUN_00102cdc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f31(undefined8 param_1,undefined8 param_2)

{
  FUN_00103180(param_1,param_2,0);
  return;
}




undefined8 FUN_00103c38(void)

{
  return 0;
}




void FUN_00103707(undefined8 param_1)

{
  FUN_00103732(param_1,2);
  return;
}




undefined8 FUN_00103e86(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102cee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cdc(param_3);
  FUN_00102ff0(param_1,param_2,uVar1);
  return;
}




void FUN_00103f41(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103c98(void)

{
  return;
}




void FUN_00101dd8(undefined8 param_1)

{
  FUN_0010272c(param_1);
  return;
}




undefined8 FUN_00102f5f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103048(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010330b(undefined8 param_1)

{
  FUN_00103358(param_1);
  return;
}




void FUN_00103d1c(void)

{
  return;
}




void FUN_00101cb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025ce(param_2);
  FUN_0010257d(&local_31,uVar1);
  uVar1 = FUN_00102556(param_2);
                    /* try { // try from 00101d1e to 00101d22 has its CatchHandler @ 00101d8b */
  FUN_001025e0(param_1,uVar1,&local_31);
  FUN_00101aba(&local_31);
  uVar2 = FUN_00101e74(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010269e(param_2);
  uVar4 = FUN_00102646(param_2);
                    /* try { // try from 00101d6c to 00101d70 has its CatchHandler @ 00101da9 */
  uVar1 = FUN_001026f6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102dd6(undefined8 param_1)

{
  return param_1;
}




void FUN_001035ed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103622(param_1,param_2,param_3);
  return;
}




void FUN_0010377c(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102d2b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103034(param_1,param_2);
  return;
}




void FUN_00103857(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001024a4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eb4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




undefined8 FUN_00102646(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102798(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101aba(undefined8 param_1)

{
  FUN_00101e2a(param_1);
  return;
}




void FUN_00103034(void)

{
  return;
}




void FUN_00103cf0(void)

{
  return;
}




undefined8 FUN_00101ed6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e74(param_1);
  FUN_00101e86(*param_1,param_1[1],uVar1);
  FUN_00101ada(param_1);
  return;
}




undefined8 FUN_0010257d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b6f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long FUN_00102cc6(long param_1)

{
  return param_1 + 8;
}




void FUN_00103cda(void)

{
  return;
}




bool FUN_00103e2b(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00102b17(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f5f(param_2);
  uVar2 = FUN_00102f5f(param_1);
  FUN_00102da1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102bc6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b9c(param_1,param_2);
  FUN_00101df8(param_1);
  return;
}




void FUN_00102cb3(void)

{
  return;
}




void FUN_0010199e(void)

{
  FUN_00101682();
  FUN_00101805();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_00101ee8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102798(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cb9(void)

{
  return;
}




void FUN_00103802(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001027cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cdc(param_3);
  uVar2 = FUN_00102cc6(param_1);
  FUN_00102cee(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102798(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010296a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e56(param_2);
  uVar2 = FUN_00102e56(param_1);
  FUN_00102e68(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001035d8(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001028c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d55(param_2);
  uVar2 = FUN_00102d55(param_1);
  FUN_00102da1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010276d(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cb3(param_1,param_2);
  return;
}




int FUN_00103c47(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_0010287e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ed6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ed6(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103048(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102da1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103066(param_1,param_2,param_3);
  return;
}




void FUN_0010282c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cc6(param_1);
  FUN_00102d2b(*param_1,uVar1);
  return;
}




void FUN_00103cae(void)

{
  return;
}




ulong FUN_001029f0(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102edc(param_1);
  lVar2 = FUN_00102556(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102556(local_40);
  local_30 = FUN_00102556(local_40);
  plVar3 = (long *)FUN_00102f02(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102556(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102edc(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102edc(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001030e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032bd(param_1,param_2,param_3);
  return;
}



