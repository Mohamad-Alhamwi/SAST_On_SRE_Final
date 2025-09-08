
undefined8 FUN_00101e3e(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e6c(param_1,param_2);
  return param_1;
}




void FUN_00101758(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101b38(undefined8 param_1)

{
  return param_1;
}




void FUN_00102191(undefined8 param_1,undefined8 param_2)

{
  FUN_00102234(param_1,param_2,0);
  return;
}




undefined8 FUN_00101bd2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00102998(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 * FUN_00101f2e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102a36(void)

{
  return;
}




void FUN_00102c73(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101fe0(void)

{
  return;
}




void FUN_00102a57(void)

{
  return;
}




undefined8 FUN_001016bd(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024a7("Calling good()...");
  FUN_001016ad();
  FUN_001024a7("Finished good()");
  FUN_001024a7("Calling bad()...");
  FUN_00101489();
  FUN_001024a7("Finished bad()");
  return 0;
}




void FUN_001026d6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001021d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d38(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101722(8,param_2);
  *puVar2 = uVar1;
  return;
}




long FUN_00102100(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




undefined8 FUN_001021bf(undefined8 param_1)

{
  return param_1;
}




void FUN_0010185a(undefined8 param_1)

{
  FUN_001019bc(param_1);
  FUN_0010178e(param_1);
  return;
}




void FUN_00102a15(void)

{
  return;
}




void FUN_001029e9(void)

{
  return;
}




void FUN_00102136(long param_1)

{
  FUN_00102216(param_1 + 0x10);
  return;
}




void FUN_00102404(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a3a(param_1);
  FUN_00102462(&local_18);
  FUN_00102486(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00102b7c(pthread_t *param_1)

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




undefined8 FUN_00101e96(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a0a(void)

{
  return;
}




void FUN_00101d1a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010297a(void)

{
  return 1;
}




void FUN_00102d50(void)

{
  return;
}




void FUN_001026ab(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101886(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a3a(param_1);
  FUN_00101a86(param_1,uVar1,param_2);
  return;
}




void FUN_00102704(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102527(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010257d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00102797(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_00101d38(undefined8 param_1)

{
  return param_1;
}




void FUN_00101738(undefined8 param_1)

{
  FUN_00101758(param_1);
  return;
}




void FUN_0010198c(undefined8 param_1)

{
  FUN_00101c7c(param_1);
  return;
}




void FUN_00102486(undefined8 *param_1)

{
  FUN_00101c8c(*param_1);
  return;
}




void FUN_00102a20(void)

{
  return;
}




undefined8 FUN_00102158(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_001018c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b38(param_2);
  FUN_00101ae7(&local_21,uVar1);
  FUN_00101b4a(param_1,&local_21);
  FUN_0010183a(&local_21);
  uVar1 = FUN_00101bd2(param_2);
  uVar2 = FUN_00101b82(param_2);
                    /* try { // try from 0010194c to 00101950 has its CatchHandler @ 00101953 */
  FUN_00101c1e(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cea(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ff3(param_1,param_2,1);
  return;
}




void FUN_00102a62(void)

{
  return;
}




void FUN_00101c1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101f08(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f52(&local_18);
    FUN_00101f74(local_10,uVar2);
    FUN_00101f2e(&local_18);
  }
  return;
}




void FUN_00102216(undefined8 param_1)

{
  FUN_00102284(param_1);
  return;
}




undefined8 FUN_00101ae7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e3e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_0010289b(long param_1,ulong param_2,long param_3)

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




void FUN_00101a86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d38(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d4a(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e14(param_1,1);
  return;
}




undefined8 FUN_00101a3a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d1a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101b82(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101eea(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016ad(void)

{
  FUN_0010159b();
  return;
}




void FUN_001017ce(undefined8 param_1)

{
  FUN_001017ae(param_1);
  return;
}




void FUN_00101489(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ce(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(400);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001014e8 to 00101525 has its CatchHandler @ 00101571 */
  FUN_00101886(local_58,&local_60);
  FUN_00101886(local_58,&local_60);
  FUN_00101886(local_58,&local_60);
  FUN_001018c0(local_38,local_58);
                    /* try { // try from 0010152d to 00101531 has its CatchHandler @ 0010155c */
  FUN_001022ae(local_38);
  FUN_001017ee(local_38);
  FUN_001017ee(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a78(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001024cd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001029b2(void)

{
  return;
}




void FUN_0010216a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102629(undefined4 param_1)

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




void FUN_001017ae(undefined8 param_1)

{
  FUN_0010180e(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




undefined8 FUN_00101722(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101c8c(long param_1)

{
  FUN_00101fc2(param_1 + 0x10);
  return;
}




undefined8 FUN_00101cae(undefined8 param_1)

{
  return param_1;
}




void FUN_001019ac(void)

{
  return;
}




void FUN_00101e14(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a6d(void)

{
  return;
}




void FUN_001029d3(void)

{
  return;
}




undefined8 FUN_00102aaf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a78,local_18);
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




void FUN_00101ea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e96(param_2);
  FUN_00101e6c(param_1,uVar1);
  FUN_00101738(param_1);
  return;
}




void FUN_00102737(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010159b(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017ce(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(800);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001015fa to 00101637 has its CatchHandler @ 00101683 */
  FUN_00101886(local_58,&local_60);
  FUN_00101886(local_58,&local_60);
  FUN_00101886(local_58,&local_60);
  FUN_001018c0(local_38,local_58);
                    /* try { // try from 0010163f to 00101643 has its CatchHandler @ 0010166e */
  FUN_00102359(local_38);
  FUN_001017ee(local_38);
  FUN_001017ee(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101d4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102026(param_1);
  uVar2 = FUN_00101cae(param_1);
  FUN_0010204a(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d38(param_2);
  uVar4 = FUN_00101c8c(uVar1);
  FUN_001020c3(uVar2,uVar4,uVar3);
  FUN_00102100(local_38,0);
  FUN_00102084(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_0010204a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021bf(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001020c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d38(param_3);
  FUN_001021d2(param_1,param_2,uVar1);
  return;
}




void FUN_00101fc2(undefined8 param_1)

{
  FUN_00102158(param_1);
  return;
}




void FUN_00102a4c(void)

{
  return;
}




undefined8 FUN_00102296(void)

{
  return 0x555555555555555;
}




void FUN_00102cb1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102026(undefined8 param_1)

{
  FUN_00102191(param_1,1);
  return;
}




void FUN_001024ff(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001029de(void)

{
  return;
}




void FUN_001017ee(undefined8 param_1)

{
  FUN_0010185a(param_1);
  return;
}




undefined8 FUN_00101f08(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101f74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d38(param_2);
  uVar2 = FUN_00101a3a(param_1);
  FUN_00101a86(param_1,uVar2,uVar1);
  return;
}




void FUN_00102359(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_00102404(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memmove(puVar1,local_338,800);
  FUN_001025a8(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102683(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102bfa(undefined8 *param_1)

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




undefined8 FUN_00102bd7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102c92(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001025d3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102989(void)

{
  return 0;
}




void FUN_0010178e(undefined8 param_1)

{
  FUN_0010183a(param_1);
  return;
}




void FUN_001022ae(undefined8 param_1)

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
  puVar1 = (undefined8 *)FUN_00102404(param_1);
  puVar1 = (undefined8 *)*puVar1;
  puVar3 = local_338;
  for (lVar2 = 100; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  memmove(puVar1,local_338,800);
  FUN_001025a8(*puVar1);
  free(puVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102284(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c7c(void)

{
  return;
}




void FUN_00101cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fe0(param_1,param_2);
  return;
}




void FUN_001029bd(void)

{
  return;
}




void FUN_001025a8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010180e(undefined8 param_1)

{
  FUN_0010198c(param_1);
  FUN_00101738(param_1);
  return;
}




void FUN_00101b4a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e96(param_2);
  FUN_00101ea8(param_1,uVar1);
  return;
}




void FUN_00102122(void)

{
  return;
}




void FUN_00102234(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102296(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101ff3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010216a(param_1,param_2,param_3);
  return;
}




void FUN_001024a7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102a41(void)

{
  return;
}




void FUN_0010183a(undefined8 param_1)

{
  FUN_001019ac(param_1);
  return;
}




long * FUN_00102462(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102553(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029c8(void)

{
  return;
}




void FUN_00102a2b(void)

{
  return;
}




void FUN_001025fe(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001019bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c8c(local_20);
    uVar3 = FUN_00101cae(param_1);
    FUN_00101cc0(uVar3,uVar2);
    FUN_00101cea(param_1,local_20);
    local_20 = puVar1;
  }
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




void FUN_00102084(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101ff3(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102122(param_1,param_2);
  return;
}




void FUN_00101eea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f52(undefined8 *param_1)

{
  FUN_00102136(*param_1);
  return;
}




void FUN_001029ff(void)

{
  return;
}




void FUN_001029f4(void)

{
  return;
}




void FUN_00102ce0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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



