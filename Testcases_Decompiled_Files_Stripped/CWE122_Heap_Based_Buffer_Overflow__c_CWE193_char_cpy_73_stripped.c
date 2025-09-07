
void FUN_00101eaa(void)

{
  return;
}




void FUN_00101692(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101ab4(undefined8 param_1)

{
  FUN_00101c26(param_1);
  return;
}




void FUN_00102293(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f25(param_3);
  FUN_00102390(param_1,param_2,uVar1);
  return;
}




void FUN_00101b3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101d66(param_2);
  FUN_00101d15(&local_21,uVar1);
  FUN_00101d78(param_1,&local_21);
  FUN_00101ab4(&local_21);
  uVar1 = FUN_00101e00(param_2);
  uVar2 = FUN_00101db0(param_2);
                    /* try { // try from 00101bc6 to 00101bca has its CatchHandler @ 00101bcd */
  FUN_00101e4c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_0010295d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102002(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_001029fb(void)

{
  return;
}




void FUN_00102c38(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102096(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102084(param_2);
  FUN_0010205a(param_1,uVar1);
  FUN_001019b2(param_1);
  return;
}




void FUN_00102a1c(void)

{
  return;
}




undefined8 FUN_00101600(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101692(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010269b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001022f2(void)

{
  return;
}




void FUN_001021b0(void)

{
  return;
}




long FUN_001022d0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_00101936(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010246c("Calling good()...");
  FUN_00101926();
  FUN_0010246c("Finished good()");
  FUN_0010246c("Calling bad()...");
  FUN_00101702();
  FUN_0010246c("Finished bad()");
  return 0;
}




void FUN_001029da(void)

{
  return;
}




void FUN_001029ae(void)

{
  return;
}




void FUN_001021f6(undefined8 param_1)

{
  FUN_0010234f(param_1,1);
  return;
}




void FUN_001023f2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102454(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




bool FUN_00102b41(pthread_t *param_1)

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




void FUN_00101ecc(undefined8 param_1,undefined8 param_2)

{
  FUN_001021b0(param_1,param_2);
  return;
}




void FUN_001029cf(void)

{
  return;
}




void FUN_00101d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102084(param_2);
  FUN_00102096(param_1,uVar1);
  return;
}




undefined8 FUN_0010293f(void)

{
  return 1;
}




void FUN_00102d20(void)

{
  return;
}




void FUN_00102670(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010199b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001026c9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001024ec(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102542(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_0010275c(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




undefined8 FUN_00101db0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101670(undefined8 *param_1)

{
  FUN_001016b0(*param_1);
  return;
}




void FUN_001019d2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102454(void)

{
  return 0x555555555555555;
}




void FUN_001029e5(void)

{
  return;
}




void FUN_0010221a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010237d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_001019b2(undefined8 param_1)

{
  FUN_001019d2(param_1);
  return;
}




undefined8 FUN_00101d66(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a27(void)

{
  return;
}




void FUN_00101c06(undefined8 param_1)

{
  FUN_00101eaa(param_1);
  return;
}




void FUN_00102306(long param_1)

{
  FUN_001023d4(param_1 + 0x10);
  return;
}




void FUN_00101a88(undefined8 param_1)

{
  FUN_00101c06(param_1);
  FUN_001019b2(param_1);
  return;
}




ulong FUN_00102860(long param_1,ulong param_2,long param_3)

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




void FUN_00101a68(undefined8 param_1)

{
  FUN_00101ad4(param_1);
  return;
}




void FUN_00101a48(undefined8 param_1)

{
  FUN_00101a28(param_1);
  return;
}




void FUN_00101b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101600(param_1);
  FUN_00101cb4(param_1,uVar1,param_2);
  return;
}




void FUN_001015a2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101600(param_1);
  FUN_0010164c(&local_18);
  FUN_00101670(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001016f0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101489(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015a2(param_1);
  __dest = (char *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  strcpy(__dest,local_1b);
  FUN_0010246c(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a3d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102492(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102977(void)

{
  return;
}




void FUN_00102254(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001021c3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_001025ee(undefined4 param_1)

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




void FUN_001016d2(undefined8 param_1)

{
  FUN_001016f0(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




long * FUN_0010164c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101c36(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001016b0(local_20);
    uVar3 = FUN_00101eba(param_1);
    FUN_00101ecc(uVar3,uVar2);
    FUN_00101ef6(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f25(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f38(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102002(param_1,1);
  return;
}




void FUN_00101a08(undefined8 param_1)

{
  FUN_00101ab4(param_1);
  return;
}




void FUN_00101e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001020f6(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102140(&local_18);
    FUN_00102162(local_10,uVar2);
    FUN_0010211c(&local_18);
  }
  return;
}




void FUN_00102a32(void)

{
  return;
}




void FUN_00102998(void)

{
  return;
}




undefined8 FUN_00102a74(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a3d,local_18);
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




void FUN_00101ef6(undefined8 param_1,undefined8 param_2)

{
  FUN_001021c3(param_1,param_2,1);
  return;
}




void FUN_001026fc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101515(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001015a2(param_1);
  __dest = (char *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  strcpy(__dest,local_1b);
  FUN_0010246c(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e00(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020d8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 * FUN_0010211c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102162(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f25(param_2);
  uVar2 = FUN_00101600(param_1);
  FUN_00101cb4(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102084(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a11(void)

{
  return;
}




undefined8 FUN_0010237d(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c76(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001020f6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001024c4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001029a3(void)

{
  return;
}




void FUN_00101702(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a48(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(10);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 00101761 to 0010179e has its CatchHandler @ 001017ea */
  FUN_00101b00(local_58,&local_60);
  FUN_00101b00(local_58,&local_60);
  FUN_00101b00(local_58,&local_60);
  FUN_00101b3a(local_38,local_58);
                    /* try { // try from 001017a6 to 001017aa has its CatchHandler @ 001017d5 */
  FUN_00101489(local_38);
  FUN_00101a68(local_38);
  FUN_00101a68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001021f6(param_1);
  uVar2 = FUN_00101eba(param_1);
  FUN_0010221a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f25(param_2);
  uVar4 = FUN_001016b0(uVar1);
  FUN_00102293(uVar2,uVar4,uVar3);
  FUN_001022d0(local_38,0);
  FUN_00102254(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010205a(undefined8 param_1,undefined8 param_2)

{
  FUN_001022f2(param_1,param_2);
  return;
}




void FUN_001023d4(undefined8 param_1)

{
  FUN_00102442(param_1);
  return;
}




void FUN_00102648(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102bbf(undefined8 *param_1)

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




undefined8 FUN_00102b9c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102c57(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102598(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010294e(void)

{
  return 0;
}




void FUN_001016b0(long param_1)

{
  FUN_001016d2(param_1 + 0x10);
  return;
}




void FUN_00102390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f25(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010199b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010234f(undefined8 param_1,undefined8 param_2)

{
  FUN_001023f2(param_1,param_2,0);
  return;
}




void FUN_00101c26(void)

{
  return;
}




undefined8 FUN_00101d15(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010202c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102982(void)

{
  return;
}




void FUN_0010256d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101814(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a48(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(0xb);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 00101873 to 001018b0 has its CatchHandler @ 001018fc */
  FUN_00101b00(local_58,&local_60);
  FUN_00101b00(local_58,&local_60);
  FUN_00101b00(local_58,&local_60);
  FUN_00101b3a(local_38,local_58);
                    /* try { // try from 001018b8 to 001018bc has its CatchHandler @ 001018e7 */
  FUN_00101515(local_38);
  FUN_00101a68(local_38);
  FUN_00101a68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ad4(undefined8 param_1)

{
  FUN_00101c36(param_1);
  FUN_00101a08(param_1);
  return;
}




void FUN_001021c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102328(param_1,param_2,param_3);
  return;
}




void FUN_00102328(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001020d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010246c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a06(void)

{
  return;
}




void FUN_00101926(void)

{
  FUN_00101814();
  return;
}




undefined8 FUN_00102442(undefined8 param_1)

{
  return param_1;
}




void FUN_00102518(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010298d(void)

{
  return;
}




void FUN_001029f0(void)

{
  return;
}




void FUN_001025c3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a28(undefined8 param_1)

{
  FUN_00101a88(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102140(undefined8 *param_1)

{
  FUN_00102306(*param_1);
  return;
}




undefined8 FUN_00101eba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f25(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010202c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010205a(param_1,param_2);
  return param_1;
}




void FUN_001029c4(void)

{
  return;
}




void FUN_001029b9(void)

{
  return;
}




void FUN_00102cb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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



