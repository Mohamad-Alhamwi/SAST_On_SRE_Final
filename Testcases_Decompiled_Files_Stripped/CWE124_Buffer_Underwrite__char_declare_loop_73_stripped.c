
void FUN_00101e04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102110(param_2);
  FUN_00102122(param_1,uVar1);
  return;
}




void FUN_001015d2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101630(param_1);
  FUN_0010167c(&local_18);
  FUN_001016a0(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101b14(param_1);
  return;
}




void FUN_0010224f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023b4(param_1,param_2,param_3);
  return;
}




void FUN_00101b14(undefined8 param_1)

{
  FUN_00101c92(param_1);
  FUN_00101a3e(param_1);
  return;
}




ulong FUN_001027e8(long param_1,ulong param_2,long param_3)

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




void FUN_00101f58(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223c(param_1,param_2);
  return;
}




void FUN_00102a5b(void)

{
  return;
}




undefined8 FUN_00102b00(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ac9,local_18);
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




void FUN_0010208e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a7c(void)

{
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




void FUN_0010264f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001022a6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102409(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102182(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102282(undefined8 param_1)

{
  FUN_001023db(param_1,1);
  return;
}




undefined8 FUN_00101720(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a3a(void)

{
  return;
}




void FUN_00102a0e(void)

{
  return;
}




void FUN_001021cc(undefined8 *param_1)

{
  FUN_00102392(*param_1);
  return;
}




void FUN_001023db(undefined8 param_1,undefined8 param_2)

{
  FUN_0010247e(param_1,param_2,0);
  return;
}




void FUN_00102ab3(void)

{
  return;
}




undefined8 FUN_00101e8c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102164(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a2f(void)

{
  return;
}




void FUN_00101cc2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016e0(local_20);
    uVar3 = FUN_00101f46(param_1);
    FUN_00101f58(uVar3,uVar2);
    FUN_00101f82(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102755(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cc4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102624(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101732(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [24];
  undefined auStack_90 [8];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad4(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = auStack_90;
                    /* try { // try from 0010179d to 001017ec has its CatchHandler @ 00101844 */
  FUN_00101b8c(local_c8,&local_d0);
  FUN_00101b8c(local_c8,&local_d0);
  FUN_00101b8c(local_c8,&local_d0);
  FUN_00101bc6(local_a8,local_c8);
                    /* try { // try from 001017f7 to 001017fb has its CatchHandler @ 0010182c */
  FUN_00101469(local_a8);
  FUN_00101af4(local_a8);
  FUN_00101af4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010267a(undefined4 param_1)

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




void FUN_00102d02(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001024e0(void)

{
  return 0x555555555555555;
}




void FUN_0010251e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026fc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fb1(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fc4(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010208e(param_1,1);
  return;
}




void FUN_0010151d(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_001015d2(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_001024f8(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001019b2(void)

{
  FUN_00101874();
  return;
}




void FUN_0010241c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fb1(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a27(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a45(void)

{
  return;
}




void FUN_001021ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fb1(param_2);
  uVar2 = FUN_00101630(param_1);
  FUN_00101d40(param_1,uVar2,uVar1);
  return;
}




void FUN_00101874(void)

{
  long in_FS_OFFSET;
  undefined *local_d0;
  undefined local_c8 [32];
  undefined local_a8 [32];
  undefined local_88 [99];
  undefined local_25;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad4(local_c8);
  memset(local_88,0x41,99);
  local_25 = 0;
  local_d0 = local_88;
                    /* try { // try from 001018db to 0010192a has its CatchHandler @ 00101982 */
  FUN_00101b8c(local_c8,&local_d0);
  FUN_00101b8c(local_c8,&local_d0);
  FUN_00101b8c(local_c8,&local_d0);
  FUN_00101bc6(local_a8,local_c8);
                    /* try { // try from 00101935 to 00101939 has its CatchHandler @ 0010196a */
  FUN_0010151d(local_a8);
  FUN_00101af4(local_a8);
  FUN_00101af4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cb2(void)

{
  return;
}




void FUN_00102a87(void)

{
  return;
}




void FUN_00101b40(undefined8 param_1)

{
  FUN_00101cb2(param_1);
  return;
}




void FUN_001022e0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010224f(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101a94(undefined8 param_1)

{
  FUN_00101b40(param_1);
  return;
}




void FUN_00102727(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a5e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101a3e(undefined8 param_1)

{
  FUN_00101a5e(param_1);
  return;
}




void FUN_00101af4(undefined8 param_1)

{
  FUN_00101b60(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_001016a0(undefined8 *param_1)

{
  FUN_001016e0(*param_1);
  return;
}




void FUN_00102a9d(void)

{
  return;
}




void FUN_0010247e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024e0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




ulong FUN_001028ec(long param_1,ulong param_2,long param_3)

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




void FUN_0010223c(void)

{
  return;
}




void FUN_001025ce(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long * FUN_0010167c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101469(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_001015d2(param_1);
  lVar1 = *plVar2;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)(lVar1 + local_88) = local_78[local_88];
  }
  *(undefined *)(lVar1 + 99) = 0;
  FUN_001024f8(lVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101630(param_1);
  FUN_00101d40(param_1,uVar1,param_2);
  return;
}




void FUN_00101bc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101df2(param_2);
  FUN_00101da1(&local_21,uVar1);
  FUN_00101e04(param_1,&local_21);
  FUN_00101b40(&local_21);
  uVar1 = FUN_00101e8c(param_2);
  uVar2 = FUN_00101e3c(param_2);
                    /* try { // try from 00101c52 to 00101c56 has its CatchHandler @ 00101c59 */
  FUN_00101ed8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001019c2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024f8("Calling good()...");
  FUN_001019b2();
  FUN_001024f8("Finished good()");
  FUN_001024f8("Calling bad()...");
  FUN_00101732();
  FUN_001024f8("Finished bad()");
  return 0;
}




undefined8 FUN_00101df2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a92(void)

{
  return;
}




int FUN_001029e9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102aa8(void)

{
  return;
}




void FUN_00101ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102182(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021cc(&local_18);
    FUN_001021ee(local_10,uVar2);
    FUN_001021a8(&local_18);
  }
  return;
}




void FUN_001026d4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




undefined8 FUN_00101da1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020b8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102110(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ce3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102164(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101fc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102282(param_1);
  uVar2 = FUN_00101f46(param_1);
  FUN_001022a6(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fb1(param_2);
  uVar4 = FUN_001016e0(uVar1);
  FUN_0010231f(uVar2,uVar4,uVar3);
  FUN_0010235c(local_38,0);
  FUN_001022e0(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a71(void)

{
  return;
}




void FUN_0010237e(void)

{
  return;
}




undefined8 FUN_00102c28(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020e6(undefined8 param_1,undefined8 param_2)

{
  FUN_0010237e(param_1,param_2);
  return;
}




undefined8 FUN_001024ce(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a03(void)

{
  return;
}




void FUN_001016c2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101f46(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101fb1(undefined8 param_1)

{
  return param_1;
}




void FUN_001023b4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001025f9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ac9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102da0(void)

{
  return;
}




void FUN_00102abe(void)

{
  return;
}




bool FUN_00102bcd(pthread_t *param_1)

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




void FUN_00102578(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102788(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101630(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016c2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102392(long param_1)

{
  FUN_00102460(param_1 + 0x10);
  return;
}




long FUN_0010235c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101b60(undefined8 param_1)

{
  FUN_00101cc2(param_1);
  FUN_00101a94(param_1);
  return;
}




void FUN_00101c92(undefined8 param_1)

{
  FUN_00101f36(param_1);
  return;
}




undefined8 FUN_001029cb(void)

{
  return 1;
}




void FUN_00102550(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001016e0(long param_1)

{
  FUN_00101702(param_1 + 0x10);
  return;
}




void FUN_00101ad4(undefined8 param_1)

{
  FUN_00101ab4(param_1);
  return;
}




undefined8 * FUN_001021a8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010231f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fb1(param_3);
  FUN_0010241c(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001020b8(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e6(param_1,param_2);
  return param_1;
}




void FUN_00102460(undefined8 param_1)

{
  FUN_001024ce(param_1);
  return;
}




void FUN_00102a66(void)

{
  return;
}




void FUN_00101702(undefined8 param_1)

{
  FUN_00101720(param_1);
  return;
}




undefined8 FUN_00102409(undefined8 param_1)

{
  return param_1;
}




void FUN_001024f8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001029da(void)

{
  return 0;
}




void FUN_00102a50(void)

{
  return;
}




void FUN_001025a4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101a27(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102122(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102110(param_2);
  FUN_001020e6(param_1,uVar1);
  FUN_00101a3e(param_1);
  return;
}




undefined8 FUN_00101e3c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102164(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f36(void)

{
  return;
}




void FUN_00101f82(undefined8 param_1,undefined8 param_2)

{
  FUN_0010224f(param_1,param_2,1);
  return;
}




void FUN_00102a24(void)

{
  return;
}




void FUN_00102a19(void)

{
  return;
}




undefined8 FUN_00102c4b(undefined8 *param_1)

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



