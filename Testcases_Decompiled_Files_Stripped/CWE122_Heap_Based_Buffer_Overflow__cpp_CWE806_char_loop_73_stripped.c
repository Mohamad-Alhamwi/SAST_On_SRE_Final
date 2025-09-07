
void FUN_00101b68(undefined8 param_1)

{
  FUN_00101bd4(param_1);
  return;
}




void FUN_00101786(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00102038(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022f6(param_1);
  uVar2 = FUN_00101fba(param_1);
  FUN_0010231a(local_38,uVar2,uVar1);
  uVar3 = FUN_00102025(param_2);
  uVar4 = FUN_001017a4(uVar1);
  FUN_00102393(uVar2,uVar4,uVar3);
  FUN_001023d0(local_38,0);
  FUN_00102354(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001017e4(undefined8 param_1)

{
  return param_1;
}




void FUN_001025ec(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d06(undefined8 param_1)

{
  FUN_00101faa(param_1);
  return;
}




ulong FUN_00102960(long param_1,ulong param_2,long param_3)

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




void FUN_00102ac4(void)

{
  return;
}




void FUN_00102db0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101e15(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010212c(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




int FUN_00102a5d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102d76(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00102c9c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001024d4(undefined8 param_1)

{
  FUN_00102542(param_1);
  return;
}




undefined8 FUN_0010212c(undefined8 param_1,undefined8 param_2)

{
  FUN_0010215a(param_1,param_2);
  return param_1;
}




void FUN_00101faa(void)

{
  return;
}




void FUN_00102102(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_001027c9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001026ee(undefined4 param_1)

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




void FUN_00101fcc(undefined8 param_1,undefined8 param_2)

{
  FUN_001022b0(param_1,param_2);
  return;
}




void FUN_00102240(undefined8 *param_1)

{
  FUN_00102406(*param_1);
  return;
}




void FUN_00102aa3(void)

{
  return;
}




void FUN_00101bb4(undefined8 param_1)

{
  FUN_00101d26(param_1);
  return;
}




void FUN_0010279b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ad2(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102592(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102af0(void)

{
  return;
}




void FUN_00102490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102025(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a9b(8,param_2);
  *puVar2 = uVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_001024f2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102554(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102d57(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102e20(void)

{
  return;
}




void FUN_00102b06(void)

{
  return;
}




void FUN_00102354(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022c3(*param_1,param_1[1],1);
  }
  return;
}




long FUN_001023d0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_00102554(void)

{
  return 0x555555555555555;
}




void FUN_00101b08(undefined8 param_1)

{
  FUN_00101bb4(param_1);
  return;
}




void FUN_00102b11(void)

{
  return;
}




void FUN_001014c9(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_00101696(param_1);
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
  FUN_0010256c(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001022b0(void)

{
  return;
}




void FUN_001027fc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ff6(undefined8 param_1,undefined8 param_2)

{
  FUN_001022c3(param_1,param_2,1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101410();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00101ab2(undefined8 param_1)

{
  FUN_00101ad2(param_1);
  return;
}




undefined8 FUN_00102b74(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b3d,local_18);
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




void FUN_00102a77(void)

{
  return;
}




void FUN_00102b3d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017f6(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b48(local_58);
                    /* try { // try from 00101823 to 00101898 has its CatchHandler @ 001018e4 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  FUN_00101c00(local_58,&local_60);
  FUN_00101c00(local_58,&local_60);
  FUN_00101c00(local_58,&local_60);
  FUN_00101c3a(local_38,local_58);
                    /* try { // try from 001018a0 to 001018a4 has its CatchHandler @ 001018cf */
  FUN_001014c9(local_38);
  FUN_00101b68(local_38);
  FUN_00101b68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010215a(undefined8 param_1,undefined8 param_2)

{
  FUN_001023f2(param_1,param_2);
  return;
}




void FUN_00101764(undefined8 *param_1)

{
  FUN_001017a4(*param_1);
  return;
}




void FUN_0010256c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long * FUN_00101740(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_001016f4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101786(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001017c6(undefined8 param_1)

{
  FUN_001017e4(param_1);
  return;
}




bool FUN_00102c41(pthread_t *param_1)

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




void FUN_00102a8d(void)

{
  return;
}




void FUN_001022f6(undefined8 param_1)

{
  FUN_0010244f(param_1,1);
  return;
}




void FUN_00102618(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102025(undefined8 param_1)

{
  return param_1;
}




void FUN_0010244f(undefined8 param_1,undefined8 param_2)

{
  FUN_001024f2(param_1,param_2,0);
  return;
}




undefined8 FUN_00102cbf(undefined8 *param_1)

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




void FUN_00101a26(void)

{
  FUN_0010190e();
  return;
}




undefined8 FUN_00101a36(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010256c("Calling good()...");
  FUN_00101a26();
  FUN_0010256c("Finished good()");
  FUN_0010256c("Calling bad()...");
  FUN_001017f6();
  FUN_0010256c("Finished bad()");
  return 0;
}




void FUN_001015af(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_00101696(param_1);
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
  FUN_0010256c(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b48(undefined8 param_1)

{
  FUN_00101b28(param_1);
  return;
}




void FUN_00102a82(void)

{
  return;
}




void FUN_00102698(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a98(void)

{
  return;
}




void FUN_00101bd4(undefined8 param_1)

{
  FUN_00101d36(param_1);
  FUN_00101b08(param_1);
  return;
}




undefined8 FUN_00102542(undefined8 param_1)

{
  return param_1;
}




void FUN_00102afb(void)

{
  return;
}




void FUN_00101b28(undefined8 param_1)

{
  FUN_00101b88(param_1);
  return;
}




undefined8 FUN_00101eb0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021d8(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001021f6(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102240(&local_18);
    FUN_00102262(local_10,uVar2);
    FUN_0010221c(&local_18);
  }
  return;
}




void FUN_00101db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102025(param_3);
  p_Var2 = (_List_node_base *)FUN_00102038(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102102(param_1,1);
  return;
}




undefined8 FUN_00102a4e(void)

{
  return 0;
}




void FUN_001021d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102ada(void)

{
  return;
}




void FUN_00101e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102184(param_2);
  FUN_00102196(param_1,uVar1);
  return;
}




void FUN_0010231a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010247d(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001026c3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c3a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e66(param_2);
  FUN_00101e15(&local_21,uVar1);
  FUN_00101e78(param_1,&local_21);
  FUN_00101bb4(&local_21);
  uVar1 = FUN_00101f00(param_2);
  uVar2 = FUN_00101eb0(param_2);
                    /* try { // try from 00101cc6 to 00101cca has its CatchHandler @ 00101ccd */
  FUN_00101f4c(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d36(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017a4(local_20);
    uVar3 = FUN_00101fba(param_1);
    FUN_00101fcc(uVar3,uVar2);
    FUN_00101ff6(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 * FUN_0010221c(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_0010247d(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ab9(void)

{
  return;
}




void FUN_00102b1c(void)

{
  return;
}




void FUN_00102b32(void)

{
  return;
}




void FUN_00102aae(void)

{
  return;
}




void FUN_00102acf(void)

{
  return;
}




void FUN_00102406(long param_1)

{
  FUN_001024d4(param_1 + 0x10);
  return;
}




void FUN_001025c4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102d38(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001021f6(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102196(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102184(param_2);
  FUN_0010215a(param_1,uVar1);
  FUN_00101ab2(param_1);
  return;
}




void FUN_0010190e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b48(local_58);
                    /* try { // try from 0010193b to 001019b0 has its CatchHandler @ 001019fc */
  local_60 = operator_new__(100);
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  FUN_00101c00(local_58,&local_60);
  FUN_00101c00(local_58,&local_60);
  FUN_00101c00(local_58,&local_60);
  FUN_00101c3a(local_38,local_58);
                    /* try { // try from 001019b8 to 001019bc has its CatchHandler @ 001019e7 */
  FUN_001015af(local_38);
  FUN_00101b68(local_38);
  FUN_00101b68(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101a9b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102642(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001023f2(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_00102b27(void)

{
  return;
}




void FUN_001017a4(long param_1)

{
  FUN_001017c6(param_1 + 0x10);
  return;
}




undefined8 FUN_00101fba(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102184(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101e66(undefined8 param_1)

{
  return param_1;
}




void FUN_001022c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102428(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102a3f(void)

{
  return 1;
}




void FUN_00102262(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102025(param_2);
  uVar2 = FUN_001016f4(param_1);
  FUN_00101db4(param_1,uVar2,uVar1);
  return;
}




void FUN_00102393(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102025(param_3);
  FUN_00102490(param_1,param_2,uVar1);
  return;
}




void FUN_0010266d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_0010285c(long param_1,ulong param_2,long param_3)

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




void FUN_00102428(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101696(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016f4(param_1);
  FUN_00101740(&local_18);
  FUN_00101764(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f00(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021d8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b88(undefined8 param_1)

{
  FUN_00101d06(param_1);
  FUN_00101ab2(param_1);
  return;
}




void FUN_00101c00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016f4(param_1);
  FUN_00101db4(param_1,uVar1,param_2);
  return;
}




void FUN_00101d26(void)

{
  return;
}




void FUN_00102770(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102748(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102ae5(void)

{
  return;
}



