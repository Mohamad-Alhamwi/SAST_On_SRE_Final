
undefined8 FUN_00101f2a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101638(undefined8 param_1)

{
  FUN_00101656(param_1);
  return;
}




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101ca6(param_1);
  FUN_00101a78(param_1);
  return;
}




long FUN_00102340(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101c76(undefined8 param_1)

{
  FUN_00101f1a(param_1);
  return;
}




void FUN_001029e7(void)

{
  return;
}




undefined8 FUN_0010209c(undefined8 param_1,undefined8 param_2)

{
  FUN_001020ca(param_1,param_2);
  return param_1;
}




void FUN_00102a76(void)

{
  return;
}




void FUN_00102cc7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102148(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a97(void)

{
  return;
}




void FUN_001015d6(undefined8 *param_1)

{
  FUN_00101616(*param_1);
  return;
}




void FUN_00102739(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102376(long param_1)

{
  FUN_00102444(param_1 + 0x10);
  return;
}




void FUN_00102233(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102398(param_1,param_2,param_3);
  return;
}




void FUN_00102362(void)

{
  return;
}




undefined8 FUN_00101a0b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102a55(void)

{
  return;
}




void FUN_00102a29(void)

{
  return;
}




void FUN_0010228a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023ed(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001024b2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c0c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101f66(undefined8 param_1,undefined8 param_2)

{
  FUN_00102233(param_1,param_2,1);
  return;
}




void FUN_00102a4a(void)

{
  return;
}




undefined8 FUN_00101e20(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102148(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001029be(void)

{
  return 0;
}




void FUN_0010270b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a22(undefined8 param_1)

{
  FUN_00101a42(param_1);
  return;
}




void FUN_0010276c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102588(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001025dd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001028d0(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014a5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101508(param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,8);
  }
  return;
}




undefined8 FUN_00101e70(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102148(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101616(long param_1)

{
  FUN_00101638(param_1 + 0x10);
  return;
}




void FUN_00101a78(undefined8 param_1)

{
  FUN_00101b24(param_1);
  return;
}




void FUN_001024dc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a60(void)

{
  return;
}




void FUN_001022c4(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102233(*param_1,param_1[1],1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101a42(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101de8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f4(param_2);
  FUN_00102106(param_1,uVar1);
  return;
}




void FUN_00102aa2(void)

{
  return;
}




void FUN_00101c96(void)

{
  return;
}




void FUN_00102398(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101b24(undefined8 param_1)

{
  FUN_00101c96(param_1);
  return;
}




undefined8 FUN_001029af(void)

{
  return 1;
}




void FUN_00101af8(undefined8 param_1)

{
  FUN_00101c76(param_1);
  FUN_00101a22(param_1);
  return;
}




void FUN_00101ad8(undefined8 param_1)

{
  FUN_00101b44(param_1);
  return;
}




void FUN_00101baa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dd6(param_2);
  FUN_00101d85(&local_21,uVar1);
  FUN_00101de8(param_1,&local_21);
  FUN_00101b24(&local_21);
  uVar1 = FUN_00101e70(param_2);
  uVar2 = FUN_00101e20(param_2);
                    /* try { // try from 00101c36 to 00101c3a has its CatchHandler @ 00101c3d */
  FUN_00101ebc(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long * FUN_001015b2(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010177d(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017b2 to 00101806 has its CatchHandler @ 00101852 */
  local_60 = operator_new(8);
  FUN_00101b70(local_58,&local_60);
  FUN_00101b70(local_58,&local_60);
  FUN_00101b70(local_58,&local_60);
  FUN_00101baa(local_38,local_58);
                    /* try { // try from 0010180e to 00101812 has its CatchHandler @ 0010183d */
  FUN_001014a5(local_38);
  FUN_00101ad8(local_38);
  FUN_00101ad8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101508(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101566(param_1);
  FUN_001015b2(&local_18);
  FUN_001015d6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ae4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aad,local_18);
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




void FUN_00102534(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001029f2(void)

{
  return;
}




void FUN_00102303(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f95(param_3);
  FUN_00102400(param_1,param_2,uVar1);
  return;
}




void FUN_001026b8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101668(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 0010169d to 00101707 has its CatchHandler @ 00101753 */
  local_60 = operator_new(8);
  if (local_60 != (void *)0x0) {
    operator_delete(local_60,8);
  }
  FUN_00101b70(local_58,&local_60);
  FUN_00101b70(local_58,&local_60);
  FUN_00101b70(local_58,&local_60);
  FUN_00101baa(local_38,local_58);
                    /* try { // try from 0010170f to 00101713 has its CatchHandler @ 0010173e */
  FUN_00101469(local_38);
  FUN_00101ad8(local_38);
  FUN_00101ad8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101469(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101508(param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,8);
  }
  return;
}




void FUN_001015f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f95(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fa8(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102072(param_1,1);
  return;
}




undefined8 FUN_00101d85(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010209c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101a98(undefined8 param_1)

{
  FUN_00101af8(param_1);
  return;
}




void FUN_00101f1a(void)

{
  return;
}




void FUN_00102aad(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102a13(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102bb1(pthread_t *param_1)

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




undefined8 FUN_00101f95(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001027cc(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101566(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001015f8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00102166(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021b0(&local_18);
    FUN_001021d2(local_10,uVar2);
    FUN_0010218c(&local_18);
  }
  return;
}




void FUN_001021b0(undefined8 *param_1)

{
  FUN_00102376(*param_1);
  return;
}




void FUN_00102220(void)

{
  return;
}




void FUN_00102106(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f4(param_2);
  FUN_001020ca(param_1,uVar1);
  FUN_00101a22(param_1);
  return;
}




void FUN_00102a8c(void)

{
  return;
}




void FUN_00102400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f95(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a0b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102d20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 * FUN_0010218c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010255c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a1e(void)

{
  return;
}




void FUN_0010187c(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab8(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018b1 to 0010191b has its CatchHandler @ 00101967 */
  local_60 = operator_new(8);
  if (local_60 != (void *)0x0) {
    operator_delete(local_60,8);
  }
  FUN_00101b70(local_58,&local_60);
  FUN_00101b70(local_58,&local_60);
  FUN_00101b70(local_58,&local_60);
  FUN_00101baa(local_38,local_58);
                    /* try { // try from 00101923 to 00101927 has its CatchHandler @ 00101952 */
  FUN_001014e1(local_38);
  FUN_00101ad8(local_38);
  FUN_00101ad8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102072(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_001020f4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102462(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024c4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026e0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102ca8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102c2f(undefined8 *param_1)

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




void FUN_00102ce6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102633(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




int FUN_001029cd(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101656(undefined8 param_1)

{
  return param_1;
}




void FUN_00102444(undefined8 param_1)

{
  FUN_001024b2(param_1);
  return;
}




undefined8 FUN_001023ed(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ca6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101616(local_20);
    uVar3 = FUN_00101f2a(param_1);
    FUN_00101f3c(uVar3,uVar2);
    FUN_00101f66(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101dd6(undefined8 param_1)

{
  return param_1;
}




void FUN_001029fd(void)

{
  return;
}




void FUN_00102608(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101991(void)

{
  FUN_0010177d();
  FUN_0010187c();
  return;
}




void FUN_00101b70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101566(param_1);
  FUN_00101d24(param_1,uVar1,param_2);
  return;
}




void FUN_00102266(undefined8 param_1)

{
  FUN_001023bf(param_1,1);
  return;
}




void FUN_001023bf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102462(param_1,param_2,0);
  return;
}




undefined8 FUN_00102166(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102502(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a81(void)

{
  return;
}




undefined8 FUN_001019a6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024dc("Calling good()...");
  FUN_00101991();
  FUN_001024dc("Finished good()");
  FUN_001024dc("Calling bad()...");
  FUN_00101668();
  FUN_001024dc("Finished bad()");
  return 0;
}




undefined8 FUN_001024c4(void)

{
  return 0x555555555555555;
}




void FUN_001025b2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a08(void)

{
  return;
}




void FUN_00102a6b(void)

{
  return;
}




void FUN_0010265e(undefined4 param_1)

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




void FUN_00101ab8(undefined8 param_1)

{
  FUN_00101a98(param_1);
  return;
}




void FUN_001014e1(undefined8 param_1)

{
  FUN_00101508(param_1);
  return;
}




void FUN_001021d2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f95(param_2);
  uVar2 = FUN_00101566(param_1);
  FUN_00101d24(param_1,uVar2,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102220(param_1,param_2);
  return;
}




undefined8 FUN_00101fa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102266(param_1);
  uVar2 = FUN_00101f2a(param_1);
  FUN_0010228a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f95(param_2);
  uVar4 = FUN_00101616(uVar1);
  FUN_00102303(uVar2,uVar4,uVar3);
  FUN_00102340(local_38,0);
  FUN_001022c4(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001020ca(undefined8 param_1,undefined8 param_2)

{
  FUN_00102362(param_1,param_2);
  return;
}




void FUN_00102a3f(void)

{
  return;
}




void FUN_00102a34(void)

{
  return;
}




void FUN_00102d90(void)

{
  return;
}



