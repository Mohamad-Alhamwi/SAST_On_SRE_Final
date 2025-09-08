
void FUN_001037d4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103b5f(void)

{
  return 0;
}




void FUN_00103bd5(void)

{
  return;
}




undefined8 FUN_00103b50(void)

{
  return 1;
}




void FUN_001030de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b5(param_1,param_2,param_3);
  return;
}




void FUN_00101bea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101ee0(param_1);
  local_18 = FUN_00101f37(&local_38,&local_20);
  local_20 = FUN_0010249c(local_30);
  uVar1 = FUN_001024e8(&local_20,local_18);
  FUN_00101f7c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010249c(local_30);
  FUN_001024e8(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001034ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4e(param_3);
  uVar2 = FUN_00102e4e(local_28);
  uVar3 = FUN_00102e4e(local_20);
  uVar1 = FUN_001035e5(uVar3,uVar2,uVar1);
  FUN_001030c8(&local_30,uVar1);
  return;
}




long FUN_0010323f(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103e87(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001025c6(param_2);
  FUN_00102575(&local_31,uVar1);
  uVar1 = FUN_0010254e(param_2);
                    /* try { // try from 00101d16 to 00101d1a has its CatchHandler @ 00101d83 */
  FUN_001025d8(param_1,uVar1,&local_31);
  FUN_00101ab2(&local_31);
  uVar2 = FUN_00101e6c(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102696(param_2);
  uVar4 = FUN_0010263e(param_2);
                    /* try { // try from 00101d64 to 00101d68 has its CatchHandler @ 00101da1 */
  uVar1 = FUN_001026ee(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102824(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cbe(param_1);
  FUN_00102d23(*param_1,uVar1);
  return;
}




void FUN_001028ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d4d(param_2);
  uVar2 = FUN_00102d4d(param_1);
  FUN_00102d99(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001034a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010356d(param_1,param_2,param_3);
  return;
}




void FUN_00102765(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cab(param_1,param_2);
  return;
}




undefined8 FUN_00102b67(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b94(param_1,param_2);
  return param_1;
}




undefined8 FUN_00103483(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027b2(&local_10);
  return *puVar1;
}




undefined8 FUN_00103368(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101b6c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eac(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001035d0(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101804(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a66(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b6c(local_58);
  FUN_00101bbc(local_38,&local_60);
                    /* try { // try from 0010188f to 00101924 has its CatchHandler @ 00101970 */
  FUN_00101bea(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b6c(local_58);
  FUN_00101bbc(local_38,&local_60);
  FUN_00101bea(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b6c(local_58);
  FUN_00101bbc(local_38,&local_60);
  FUN_00101bea(local_58,local_38[0],1,&local_68);
  FUN_00101cb0(local_38,local_58);
                    /* try { // try from 0010192c to 00101930 has its CatchHandler @ 0010195b */
  FUN_00101599(local_38);
  FUN_00101b24(local_38);
  FUN_00101b24(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b9e(void)

{
  return;
}




void FUN_0010199a(void)

{
  FUN_00101804();
  return;
}




undefined8 FUN_001019aa(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010367d("Calling good()...");
  FUN_0010199a();
  FUN_0010367d("Finished good()");
  FUN_0010367d("Calling bad()...");
  FUN_0010166e();
  FUN_0010367d("Finished bad()");
  return 0;
}




void FUN_00103c0c(void)

{
  return;
}




void FUN_00102fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102cd4(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a0f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102bf4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102ad8(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




int FUN_00103b6e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102575(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102b67(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102f29(undefined8 param_1,undefined8 param_2)

{
  FUN_00103178(param_1,param_2,0);
  return;
}




void FUN_00102e9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030de(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102ad8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f29(param_1,param_2);
  }
  return uVar1;
}




bool FUN_00103d52(pthread_t *param_1)

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




void FUN_001033e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001034d9(param_2);
  uVar2 = FUN_001034d9(param_1);
  FUN_001034ff(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c84(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103c38(void)

{
  return;
}




void FUN_00103be0(void)

{
  return;
}




void FUN_001036a3(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010390d(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




ulong FUN_0010396d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b93(void)

{
  return;
}




void FUN_0010337a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4e(param_3);
  uVar2 = FUN_00103483(local_28);
  uVar3 = FUN_00103483(local_20);
  uVar1 = FUN_001034a4(uVar3,uVar2,uVar1);
  FUN_001030c8(&local_30,uVar1);
  return;
}




undefined8 * FUN_00103438(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_001029b3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e9e(param_1,param_2,param_3);
  return;
}




void FUN_00101a86(undefined8 param_1)

{
  FUN_00101dd0(param_1);
  FUN_00101df0(param_1);
  return;
}




void FUN_0010377e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101eac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong * FUN_00102efa(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00102696(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102790(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037ff(undefined4 param_1)

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




void FUN_00103e68(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001031be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103368(param_2);
  uVar2 = FUN_00103368(param_1);
  FUN_0010337a(uVar2,uVar1,param_3);
  return;
}




void FUN_0010320e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e8(param_1,param_2,param_3);
  return;
}




void FUN_0010302c(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001032b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e4e(param_1);
  uVar1 = FUN_00103438(uVar1,param_2,param_3);
  FUN_001030c8(&local_10,uVar1);
  return;
}




void FUN_00103bca(void)

{
  return;
}




undefined8 FUN_001025c6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103beb(void)

{
  return;
}




undefined8 FUN_00102dce(undefined8 param_1)

{
  return param_1;
}




void FUN_001036d5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a46(undefined8 param_1)

{
  FUN_00101a86(param_1);
  return;
}




void FUN_00102ed4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001025c6(param_1);
  FUN_0010310f(uVar1);
  return;
}




void FUN_00101a26(undefined8 param_1)

{
  FUN_00101ab2(param_1);
  return;
}




void FUN_00103b88(void)

{
  return;
}




undefined8 FUN_0010310f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103303(param_1);
  puVar1 = (undefined8 *)FUN_00103321(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001034d9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001035d0(&local_10);
  FUN_00102dce(uVar1);
  return;
}




void FUN_00103040(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101ece(undefined8 param_1)

{
  return param_1;
}




void FUN_00102733(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c84(param_1,param_2,param_3);
  return;
}




void FUN_001035e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010361a(param_1,param_2,param_3);
  return;
}




void FUN_00103ba9(void)

{
  return;
}




void FUN_00103881(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103753(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e7e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102765(param_1,param_2);
  return;
}




undefined8 FUN_001024e8(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101eac(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dd0(undefined8 param_1)

{
  FUN_00102724(param_1);
  return;
}




void FUN_00103c4e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102724(void)

{
  return;
}




ulong * FUN_00103321(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102bbe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b94(param_1,param_2);
  FUN_00101df0(param_1);
  return;
}




undefined8 FUN_00101e6c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001030c8(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001038da(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_0010249c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eac(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a66(undefined8 param_1)

{
  FUN_00101a46(param_1);
  return;
}




void FUN_00102790(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103dd0(undefined8 *param_1)

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




void FUN_00103bf6(void)

{
  return;
}




void FUN_001036fd(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ad2(long *param_1)

{
  FUN_00101e32(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101a26(param_1);
  return;
}




undefined8 FUN_00102f57(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103040(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103303(undefined8 param_1)

{
  FUN_00103350(param_1);
  return;
}




ulong FUN_00103a71(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010166e(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a66(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101b6c(local_58);
  FUN_00101bbc(local_38,&local_60);
                    /* try { // try from 001016f9 to 0010178e has its CatchHandler @ 001017da */
  FUN_00101bea(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b6c(local_58);
  FUN_00101bbc(local_38,&local_60);
  FUN_00101bea(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101b6c(local_58);
  FUN_00101bbc(local_38,&local_60);
  FUN_00101bea(local_58,local_38[0],1,&local_68);
  FUN_00101cb0(local_38,local_58);
                    /* try { // try from 00101796 to 0010179a has its CatchHandler @ 001017c5 */
  FUN_001014e9(local_38);
  FUN_00101b24(local_38);
  FUN_00101b24(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010263e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102790(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102cbe(long param_1)

{
  return param_1 + 8;
}




void FUN_00101ab2(undefined8 param_1)

{
  FUN_00101e22(param_1);
  return;
}




void FUN_00102cab(void)

{
  return;
}




void FUN_00101e32(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102733(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00101ee0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102790(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_0010356d(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102e60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103c2d(void)

{
  return;
}




undefined8 FUN_00103dad(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d23(undefined8 param_1,undefined8 param_2)

{
  FUN_0010302c(param_1,param_2);
  return;
}




void FUN_00102fa4(void)

{
  return;
}




void FUN_00103bb4(void)

{
  return;
}




void FUN_00103729(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103f30(void)

{
  return;
}




undefined8 FUN_00102d4d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103040(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memmove(puVar1,local_338,800);
  FUN_0010377e(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c01(void)

{
  return;
}




void FUN_00101e22(void)

{
  return;
}




void FUN_00102fb7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031be(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103350(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103e49(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101df0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102e4e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010367d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001037a9(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d99(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010305e(param_1,param_2,param_3);
  return;
}




void FUN_001038ac(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




long FUN_0010254e(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101599(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_338 [101];
  long local_10;
  
  bVar4 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memmove(puVar1,local_338,800);
  FUN_0010377e(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e6c(param_1);
  FUN_00101e7e(*param_1,param_1[1],uVar1);
  FUN_00101ad2(param_1);
  return;
}




void FUN_001026ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c4e(param_1,param_2,param_3);
  return;
}




void FUN_0010305e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010320e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103c85(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c4e,local_18);
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




long FUN_00101f37(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027b2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027b2(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101bbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101ece(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001025d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bbe(param_1,param_3);
                    /* try { // try from 00102612 to 00102616 has its CatchHandler @ 00102619 */
  FUN_00102bf4(param_1,param_2);
  return;
}




void FUN_00102ce6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102cd4(param_3);
  FUN_00102fe8(param_1,param_2,uVar1);
  return;
}




void FUN_00103c43(void)

{
  return;
}




void FUN_00103ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102b94(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fa4(param_1,param_2);
  return;
}




void FUN_00102c4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fb7(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102cd4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101a0f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_0010164a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101f7c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001029e8(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010249c(local_80);
      local_60 = FUN_00102876(&local_88,&local_78);
      local_70 = FUN_00102ad8(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101e6c(local_80);
                    /* try { // try from 00102286 to 00102311 has its CatchHandler @ 001023c9 */
      FUN_001029b3(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101e6c(local_80);
      puVar2 = (undefined8 *)FUN_00101ece(&local_88);
      local_70 = FUN_00102b0f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101e6c(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101ece(&local_88);
      local_70 = FUN_00102b0f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101e6c(local_80);
      FUN_00101e7e(*local_80,local_80[1],uVar1);
      FUN_00101e32(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001027c4(local_38,param_1,param_4);
                    /* try { // try from 00102006 to 001021d9 has its CatchHandler @ 001023ab */
      local_50 = FUN_00102858(local_38);
      local_78 = FUN_00101b6c(local_80);
      local_48 = FUN_00102876(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101e6c(local_80);
        FUN_001028ba(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101ece(&local_88);
        FUN_00102912(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101ece(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101ece(&local_88);
        FUN_00102962(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101e6c(local_80);
        lVar4 = FUN_001029b3(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101e6c(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101ece(&local_88);
        FUN_001028ba(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101ece(&local_88);
        FUN_00102962(*puVar2,local_40,local_50);
      }
      FUN_00102824(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c22(void)

{
  return;
}




void FUN_00103859(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102858(undefined8 param_1)

{
  FUN_00102cbe(param_1);
  return;
}




void FUN_001027c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102cd4(param_3);
  uVar2 = FUN_00102cbe(param_1);
  FUN_00102ce6(*param_1,uVar2,uVar1);
  return;
}




ulong FUN_001029e8(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102ed4(param_1);
  lVar2 = FUN_0010254e(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010254e(local_40);
  local_30 = FUN_0010254e(local_40);
  plVar3 = (long *)FUN_00102efa(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010254e(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102ed4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102ed4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_0010361a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102962(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e4e(param_2);
  uVar2 = FUN_00102e4e(param_1);
  FUN_00102e60(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001027b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bbf(void)

{
  return;
}




void FUN_00102912(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102dce(param_2);
  uVar2 = FUN_00102dce(param_1);
  FUN_00102de0(uVar2,uVar1,param_3);
  return;
}




void FUN_00103093(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010323f(param_1,param_2,param_3);
  return;
}




void FUN_00102de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e4e(param_3);
  uVar2 = FUN_00102e4e(local_28);
  uVar3 = FUN_00102e4e(local_20);
  uVar1 = FUN_00103093(uVar3,uVar2,uVar1);
  FUN_001030c8(&local_30,uVar1);
  return;
}




long FUN_00102876(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101ece(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101ece(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c17(void)

{
  return;
}




void FUN_00102b0f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f57(param_2);
  uVar2 = FUN_00102f57(param_1);
  FUN_00102d99(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103178(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103350(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}



