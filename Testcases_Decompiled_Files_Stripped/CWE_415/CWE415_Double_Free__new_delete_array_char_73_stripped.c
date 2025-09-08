
void FUN_00101e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010210c(param_2);
  FUN_0010211e(param_1,uVar1);
  return;
}




undefined8 FUN_00101580(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101612(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101ab0(undefined8 param_1)

{
  FUN_00101b10(param_1);
  return;
}




void FUN_0010224b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001023b0(param_1,param_2,param_3);
  return;
}




void FUN_00101b10(undefined8 param_1)

{
  FUN_00101c8e(param_1);
  FUN_00101a3a(param_1);
  return;
}




ulong FUN_001027e4(long param_1,ulong param_2,long param_3)

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




void FUN_00101f54(undefined8 param_1,undefined8 param_2)

{
  FUN_00102238(param_1,param_2);
  return;
}




void FUN_00102a57(void)

{
  return;
}




undefined8 FUN_00102afc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ac5,local_18);
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




void FUN_0010208a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a78(void)

{
  return;
}




void FUN_001014c2(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101522(param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete__((void *)*puVar1);
  }
  return;
}




void FUN_0010264b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001022a2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102405(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_0010217e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_0010227e(undefined8 param_1)

{
  FUN_001023d7(param_1,1);
  return;
}




void FUN_00101682(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad0(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001016b7 to 00101720 has its CatchHandler @ 0010176c */
  local_60 = operator_new__(100);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_00101b88(local_58,&local_60);
  FUN_00101b88(local_58,&local_60);
  FUN_00101b88(local_58,&local_60);
  FUN_00101bc2(local_38,local_58);
                    /* try { // try from 00101728 to 0010172c has its CatchHandler @ 00101757 */
  FUN_00101489(local_38);
  FUN_00101af0(local_38);
  FUN_00101af0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a36(void)

{
  return;
}




void FUN_00102a0a(void)

{
  return;
}




void FUN_001021c8(undefined8 *param_1)

{
  FUN_0010238e(*param_1);
  return;
}




void FUN_001023d7(undefined8 param_1,undefined8 param_2)

{
  FUN_0010247a(param_1,param_2,0);
  return;
}




void FUN_00102aaf(void)

{
  return;
}




undefined8 FUN_00101e88(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102160(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a2b(void)

{
  return;
}




void FUN_00101cbe(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101630(local_20);
    uVar3 = FUN_00101f42(param_1);
    FUN_00101f54(uVar3,uVar2);
    FUN_00101f7e(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00102751(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cc0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102620(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101796(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad0(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017cb to 0010181f has its CatchHandler @ 0010186b */
  local_60 = operator_new__(100);
  FUN_00101b88(local_58,&local_60);
  FUN_00101b88(local_58,&local_60);
  FUN_00101b88(local_58,&local_60);
  FUN_00101bc2(local_38,local_58);
                    /* try { // try from 00101827 to 0010182b has its CatchHandler @ 00101856 */
  FUN_001014c2(local_38);
  FUN_00101af0(local_38);
  FUN_00101af0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102676(undefined4 param_1)

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




void FUN_00102cfe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001024dc(void)

{
  return 0x555555555555555;
}




void FUN_0010251a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001026f8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101fad(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fc0(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010208a(param_1,1);
  return;
}




void FUN_00101522(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101580(param_1);
  FUN_001015cc(&local_18);
  FUN_001015f0(&local_18);
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




void FUN_001019a9(void)

{
  FUN_00101796();
  FUN_00101895();
  return;
}




void FUN_00102418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101fad(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a23(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a41(void)

{
  return;
}




void FUN_001021ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101fad(param_2);
  uVar2 = FUN_00101580(param_1);
  FUN_00101d3c(param_1,uVar2,uVar1);
  return;
}




void FUN_00101895(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ad0(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018ca to 00101933 has its CatchHandler @ 0010197f */
  local_60 = operator_new__(100);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_00101b88(local_58,&local_60);
  FUN_00101b88(local_58,&local_60);
  FUN_00101b88(local_58,&local_60);
  FUN_00101bc2(local_38,local_58);
                    /* try { // try from 0010193b to 0010193f has its CatchHandler @ 0010196a */
  FUN_001014fb(local_38);
  FUN_00101af0(local_38);
  FUN_00101af0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cae(void)

{
  return;
}




void FUN_00102a83(void)

{
  return;
}




void FUN_00101b3c(undefined8 param_1)

{
  FUN_00101cae(param_1);
  return;
}




void FUN_001022dc(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010224b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101a90(undefined8 param_1)

{
  FUN_00101b3c(param_1);
  return;
}




void FUN_00102723(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101a5a(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101a3a(undefined8 param_1)

{
  FUN_00101a5a(param_1);
  return;
}




void FUN_00101af0(undefined8 param_1)

{
  FUN_00101b5c(param_1);
  return;
}




void FUN_00101489(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101522(param_1);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete__((void *)*puVar1);
  }
  return;
}




void FUN_00101612(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102a99(void)

{
  return;
}




void FUN_0010247a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024dc(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




ulong FUN_001028e8(long param_1,ulong param_2,long param_3)

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




void FUN_00102238(void)

{
  return;
}




void FUN_001025ca(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001015f0(undefined8 *param_1)

{
  FUN_00101630(*param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_001014fb(undefined8 param_1)

{
  FUN_00101522(param_1);
  return;
}




void FUN_00101b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101580(param_1);
  FUN_00101d3c(param_1,uVar1,param_2);
  return;
}




void FUN_00101bc2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dee(param_2);
  FUN_00101d9d(&local_21,uVar1);
  FUN_00101e00(param_1,&local_21);
  FUN_00101b3c(&local_21);
  uVar1 = FUN_00101e88(param_2);
  uVar2 = FUN_00101e38(param_2);
                    /* try { // try from 00101c4e to 00101c52 has its CatchHandler @ 00101c55 */
  FUN_00101ed4(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001019be(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024f4("Calling good()...");
  FUN_001019a9();
  FUN_001024f4("Finished good()");
  FUN_001024f4("Calling bad()...");
  FUN_00101682();
  FUN_001024f4("Finished bad()");
  return 0;
}




undefined8 FUN_00101dee(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a8e(void)

{
  return;
}




int FUN_001029e5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102aa4(void)

{
  return;
}




void FUN_00101ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010217e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021c8(&local_18);
    FUN_001021ea(local_10,uVar2);
    FUN_001021a4(&local_18);
  }
  return;
}




void FUN_001026d0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
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




undefined8 FUN_00101d9d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020b4(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010210c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cdf(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102160(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010227e(param_1);
  uVar2 = FUN_00101f42(param_1);
  FUN_001022a2(local_38,uVar2,uVar1);
  uVar3 = FUN_00101fad(param_2);
  uVar4 = FUN_00101630(uVar1);
  FUN_0010231b(uVar2,uVar4,uVar3);
  FUN_00102358(local_38,0);
  FUN_001022dc(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a6d(void)

{
  return;
}




void FUN_0010237a(void)

{
  return;
}




undefined8 FUN_00102c24(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020e2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010237a(param_1,param_2);
  return;
}




undefined8 FUN_001024ca(undefined8 param_1)

{
  return param_1;
}




void FUN_001029ff(void)

{
  return;
}




void FUN_00101630(long param_1)

{
  FUN_00101652(param_1 + 0x10);
  return;
}




undefined8 FUN_00101f42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101fad(undefined8 param_1)

{
  return param_1;
}




void FUN_001023b0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001025f5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102ac5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102da0(void)

{
  return;
}




void FUN_00102aba(void)

{
  return;
}




bool FUN_00102bc9(pthread_t *param_1)

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




void FUN_00102574(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102784(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long * FUN_001015cc(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010238e(long param_1)

{
  FUN_0010245c(param_1 + 0x10);
  return;
}




long FUN_00102358(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101b5c(undefined8 param_1)

{
  FUN_00101cbe(param_1);
  FUN_00101a90(param_1);
  return;
}




void FUN_00101c8e(undefined8 param_1)

{
  FUN_00101f32(param_1);
  return;
}




undefined8 FUN_001029c7(void)

{
  return 1;
}




void FUN_0010254c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101652(undefined8 param_1)

{
  FUN_00101670(param_1);
  return;
}




void FUN_00101ad0(undefined8 param_1)

{
  FUN_00101ab0(param_1);
  return;
}




undefined8 * FUN_001021a4(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010231b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fad(param_3);
  FUN_00102418(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001020b4(undefined8 param_1,undefined8 param_2)

{
  FUN_001020e2(param_1,param_2);
  return param_1;
}




void FUN_0010245c(undefined8 param_1)

{
  FUN_001024ca(param_1);
  return;
}




void FUN_00102a62(void)

{
  return;
}




undefined8 FUN_00101670(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102405(undefined8 param_1)

{
  return param_1;
}




void FUN_001024f4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001029d6(void)

{
  return 0;
}




void FUN_00102a4c(void)

{
  return;
}




void FUN_001025a0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101a23(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_0010211e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010210c(param_2);
  FUN_001020e2(param_1,uVar1);
  FUN_00101a3a(param_1);
  return;
}




undefined8 FUN_00101e38(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102160(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f32(void)

{
  return;
}




void FUN_00101f7e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010224b(param_1,param_2,1);
  return;
}




void FUN_00102a20(void)

{
  return;
}




void FUN_00102a15(void)

{
  return;
}




undefined8 FUN_00102c47(undefined8 *param_1)

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



