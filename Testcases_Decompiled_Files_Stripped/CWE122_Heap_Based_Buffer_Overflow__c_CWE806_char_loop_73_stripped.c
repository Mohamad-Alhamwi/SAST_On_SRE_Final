
void FUN_00101b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ee8(param_2);
  FUN_00101efa(param_1,uVar1);
  return;
}




void FUN_00101820(undefined8 param_1)

{
  FUN_00101800(param_1);
  return;
}




void FUN_00101fc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d8a(param_2);
  uVar2 = FUN_00101a8c(param_1);
  FUN_00101ad8(param_1,uVar2,uVar1);
  return;
}




void FUN_0010188c(undefined8 param_1)

{
  FUN_001019fe(param_1);
  return;
}




void FUN_00102662(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d00(undefined8 param_1)

{
  return param_1;
}




int FUN_00102a52(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102ada(void)

{
  return;
}




undefined8 FUN_00101d8a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a82(void)

{
  return;
}




void FUN_00102d4c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102540(undefined8 *param_1)

{
  FUN_00101cde(*param_1);
  return;
}




void FUN_00102032(void)

{
  return;
}




void FUN_00101efa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ee8(param_2);
  FUN_00101ebe(param_1,uVar1);
  FUN_0010178a(param_1);
  return;
}




void FUN_00102014(undefined8 param_1)

{
  FUN_001021aa(param_1);
  return;
}




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101820(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
                    /* try { // try from 00101521 to 0010155e has its CatchHandler @ 001015aa */
  FUN_001018d8(local_58,&local_60);
  FUN_001018d8(local_58,&local_60);
  FUN_001018d8(local_58,&local_60);
  FUN_00101912(local_38,local_58);
                    /* try { // try from 00101566 to 0010156a has its CatchHandler @ 00101595 */
  FUN_00102300(local_38);
  FUN_00101840(local_38);
  FUN_00101840(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00102955(long param_1,ulong param_2,long param_3)

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




void FUN_00102790(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f5a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102174(void)

{
  return;
}




void FUN_00102ab9(void)

{
  return;
}




undefined8 FUN_00101c24(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f3c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102851(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101a8c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d6c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010260d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102b06(void)

{
  return;
}




long * FUN_0010251c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_001015d4(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101820(local_58);
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
                    /* try { // try from 0010164c to 00101689 has its CatchHandler @ 001016d5 */
  FUN_001018d8(local_58,&local_60);
  FUN_001018d8(local_58,&local_60);
  FUN_001018d8(local_58,&local_60);
  FUN_00101912(local_38,local_58);
                    /* try { // try from 00101691 to 00101695 has its CatchHandler @ 001016c0 */
  FUN_001023df(local_38);
  FUN_00101840(local_38);
  FUN_00101840(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102561(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102e10(void)

{
  return;
}




void FUN_00102b1c(void)

{
  return;
}




void FUN_00102224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d8a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101774(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102286(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022e8(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001025b9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d8a(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d9c(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e66(param_1,1);
  return;
}




void FUN_00102b27(void)

{
  return;
}




undefined8 FUN_0010170f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102561("Calling good()...");
  FUN_001016ff();
  FUN_00102561("Finished good()");
  FUN_00102561("Calling bad()...");
  FUN_001014a9();
  FUN_00102561("Finished bad()");
  return 0;
}




undefined8 FUN_001021aa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a34(void)

{
  return 1;
}




undefined8 * FUN_00101f80(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001016ff(void)

{
  FUN_001015d4();
  return;
}




void FUN_00101a0e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101cde(local_20);
    uVar3 = FUN_00101d00(param_1);
    FUN_00101d12(uVar3,uVar2);
    FUN_00101d3c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102cb4(undefined8 *param_1)

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




void FUN_00102a8d(void)

{
  return;
}




undefined8 FUN_00102c91(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018ac(undefined8 param_1)

{
  FUN_00101a0e(param_1);
  FUN_001017e0(param_1);
  return;
}




void FUN_00102045(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001021bc(param_1,param_2,param_3);
  return;
}




void FUN_00101800(undefined8 param_1)

{
  FUN_00101860(param_1);
  return;
}




void FUN_001025e1(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017e0(undefined8 param_1)

{
  FUN_0010188c(param_1);
  return;
}




void FUN_001017aa(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101860(undefined8 param_1)

{
  FUN_001019de(param_1);
  FUN_0010178a(param_1);
  return;
}




void FUN_00102d2d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102aa3(void)

{
  return;
}




void FUN_001021e3(undefined8 param_1,undefined8 param_2)

{
  FUN_00102286(param_1,param_2,0);
  return;
}




void FUN_0010268d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101fa4(undefined8 *param_1)

{
  FUN_00102188(*param_1);
  return;
}




void FUN_001023df(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_60;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001024be(param_1);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  sVar2 = strlen(__s);
  for (local_60 = 0; local_60 < sVar2; local_60 = local_60 + 1) {
    local_48[local_60] = __s[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_00102561(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00102d6b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101912(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b8a(param_2);
  FUN_00101b39(&local_21,uVar1);
  FUN_00101b9c(param_1,&local_21);
  FUN_0010188c(&local_21);
  uVar1 = FUN_00101c24(param_2);
  uVar2 = FUN_00101bd4(param_2);
                    /* try { // try from 0010199e to 001019a2 has its CatchHandler @ 001019a5 */
  FUN_00101c70(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001019de(undefined8 param_1)

{
  FUN_00101cce(param_1);
  return;
}




undefined8 FUN_00101774(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101b8a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a98(void)

{
  return;
}




void FUN_0010273d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102aae(void)

{
  return;
}




void FUN_00101c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f5a(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101fa4(&local_18);
    FUN_00101fc6(local_10,uVar2);
    FUN_00101f80(&local_18);
  }
  return;
}




void FUN_00102587(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102b11(void)

{
  return;
}




undefined8 FUN_00101b39(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e90(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101e90(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ebe(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101ee8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d6c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a77(void)

{
  return;
}




void FUN_001020d6(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102045(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102af0(void)

{
  return;
}




void FUN_00101e66(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102211(undefined8 param_1)

{
  return param_1;
}




void FUN_00102765(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101cde(long param_1)

{
  FUN_00102014(param_1 + 0x10);
  return;
}




void FUN_00101d3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102045(param_1,param_2,1);
  return;
}




long FUN_00102152(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001024be(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a8c(param_1);
  FUN_0010251c(&local_18);
  FUN_00102540(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102acf(void)

{
  return;
}




void FUN_00102b32(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00102c36(pthread_t *param_1)

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




void FUN_00102ac4(void)

{
  return;
}




void FUN_00102ae5(void)

{
  return;
}




undefined8 FUN_001022e8(void)

{
  return 0x555555555555555;
}




void FUN_00102637(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102da0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102115(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d8a(param_3);
  FUN_00102224(param_1,param_2,uVar1);
  return;
}




void FUN_0010209c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102211(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001018d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a8c(param_1);
  FUN_00101ad8(param_1,uVar1,param_2);
  return;
}




void FUN_001019fe(void)

{
  return;
}




void FUN_001026b8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001022d6(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_00102b69(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b32,local_18);
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




void FUN_00101840(undefined8 param_1)

{
  FUN_001018ac(param_1);
  return;
}




void FUN_00101f3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102078(undefined8 param_1)

{
  FUN_001021e3(param_1,1);
  return;
}




undefined8 FUN_00101d9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102078(param_1);
  uVar2 = FUN_00101d00(param_1);
  FUN_0010209c(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d8a(param_2);
  uVar4 = FUN_00101cde(uVar1);
  FUN_00102115(uVar2,uVar4,uVar3);
  FUN_00102152(local_38,0);
  FUN_001020d6(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001021bc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a6c(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102188(long param_1)

{
  FUN_00102268(param_1 + 0x10);
  return;
}




void FUN_00102268(undefined8 param_1)

{
  FUN_001022d6(param_1);
  return;
}




void FUN_001026e3(undefined4 param_1)

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




undefined8 FUN_00102a43(void)

{
  return 0;
}




void FUN_00102300(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_60;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001024be(param_1);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  sVar2 = strlen(__s);
  for (local_60 = 0; local_60 < sVar2; local_60 = local_60 + 1) {
    local_48[local_60] = __s[local_60];
  }
  local_18 = local_18 & 0xff;
  FUN_00102561(__s);
  free(__s);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010178a(undefined8 param_1)

{
  FUN_001017aa(param_1);
  return;
}




void FUN_00101ebe(undefined8 param_1,undefined8 param_2)

{
  FUN_00102174(param_1,param_2);
  return;
}




undefined8 FUN_00101bd4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f3c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cce(void)

{
  return;
}




void FUN_00101d12(undefined8 param_1,undefined8 param_2)

{
  FUN_00102032(param_1,param_2);
  return;
}




void FUN_001027f1(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001027be(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102afb(void)

{
  return;
}



