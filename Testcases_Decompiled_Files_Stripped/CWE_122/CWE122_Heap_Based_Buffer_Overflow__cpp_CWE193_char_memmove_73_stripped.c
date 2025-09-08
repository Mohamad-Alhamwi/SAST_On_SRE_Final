
void FUN_00101a70(undefined8 param_1)

{
  FUN_00101ad0(param_1);
  return;
}




long * FUN_001016ba(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101f3e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010220b(param_1,param_2,1);
  return;
}




void FUN_0010171e(long param_1)

{
  FUN_00101740(param_1 + 0x10);
  return;
}




void FUN_001024da(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010166e(param_1);
  FUN_00101cfc(param_1,uVar1,param_2);
  return;
}




void FUN_00102744(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001029f6(void)

{
  return;
}




void FUN_00102c9f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102d60(void)

{
  return;
}




void FUN_00101c7e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010171e(local_20);
    uVar3 = FUN_00101f02(param_1);
    FUN_00101f14(uVar3,uVar2);
    FUN_00101f3e(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102987(void)

{
  return 1;
}




void FUN_00102c80(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102abc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102a85,local_18);
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




undefined8 FUN_001023c5(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010223e(param_1);
  uVar2 = FUN_00101f02(param_1);
  FUN_00102262(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f6d(param_2);
  uVar4 = FUN_0010171e(uVar1);
  FUN_001022db(uVar2,uVar4,uVar3);
  FUN_00102318(local_38,0);
  FUN_0010229c(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_00101e48(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102120(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f6d(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee8)();
  return;
}




void FUN_001026b8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001025e0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ef2(void)

{
  return;
}




undefined8 FUN_0010213e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_001029d5(void)

{
  return;
}




void FUN_00101ab0(undefined8 param_1)

{
  FUN_00101b1c(param_1);
  return;
}




void FUN_00102690(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001019e3(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_0010249c(void)

{
  return 0x555555555555555;
}




void FUN_00102a22(void)

{
  return;
}




void FUN_00102397(undefined8 param_1,undefined8 param_2)

{
  FUN_0010243a(param_1,param_2,0);
  return;
}




void FUN_001023d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f6d(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001019e3(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102c07(undefined8 *param_1)

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




void FUN_00102cbe(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a38(void)

{
  return;
}




void FUN_0010223e(undefined8 param_1)

{
  FUN_00102397(param_1,1);
  return;
}




void FUN_0010229c(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010220b(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010243a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010249c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001019fa(undefined8 param_1)

{
  FUN_00101a1a(param_1);
  return;
}




void FUN_00102a43(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00102188(undefined8 *param_1)

{
  FUN_0010234e(*param_1);
  return;
}




void FUN_001026e3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101f02(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




undefined8 FUN_0010197e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024b4("Calling good()...");
  FUN_0010196e();
  FUN_001024b4("Finished good()");
  FUN_001024b4("Calling bad()...");
  FUN_00101770();
  FUN_001024b4("Finished bad()");
  return 0;
}




void FUN_00102a7a(void)

{
  return;
}




undefined8 FUN_00102996(void)

{
  return 0;
}




void FUN_00102a6f(void)

{
  return;
}




void FUN_00101740(undefined8 param_1)

{
  FUN_0010175e(param_1);
  return;
}




void FUN_0010204a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_0010166e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101700(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010248a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101610(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010166e(param_1);
  FUN_001016ba(&local_18);
  FUN_001016de(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010156c(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101610(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_001024b4(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101700(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102a85(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029bf(void)

{
  return;
}




void FUN_001021f8(void)

{
  return;
}




void FUN_0010250c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f14(undefined8 param_1,undefined8 param_2)

{
  FUN_001021f8(param_1,param_2);
  return;
}




void FUN_0010234e(long param_1)

{
  FUN_0010241c(param_1 + 0x10);
  return;
}




bool FUN_00102b89(pthread_t *param_1)

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




void FUN_00101770(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a90(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017a5 to 001017f9 has its CatchHandler @ 00101845 */
  local_60 = operator_new__(10);
  FUN_00101b48(local_58,&local_60);
  FUN_00101b48(local_58,&local_60);
  FUN_00101b48(local_58,&local_60);
  FUN_00101b82(local_38,local_58);
                    /* try { // try from 00101801 to 00101805 has its CatchHandler @ 00101830 */
  FUN_001014c9(local_38);
  FUN_00101ab0(local_38);
  FUN_00101ab0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010186f(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101a90(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018a4 to 001018f8 has its CatchHandler @ 00101944 */
  local_60 = operator_new__(0xb);
  FUN_00101b48(local_58,&local_60);
  FUN_00101b48(local_58,&local_60);
  FUN_00101b48(local_58,&local_60);
  FUN_00101b82(local_38,local_58);
                    /* try { // try from 00101900 to 00101904 has its CatchHandler @ 0010192f */
  FUN_0010156c(local_38);
  FUN_00101ab0(local_38);
  FUN_00101ab0(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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




void FUN_00101a50(undefined8 param_1)

{
  FUN_00101afc(param_1);
  return;
}




int FUN_001029a5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010258a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001029ca(void)

{
  return;
}




void FUN_00101ad0(undefined8 param_1)

{
  FUN_00101c4e(param_1);
  FUN_001019fa(param_1);
  return;
}




void FUN_0010241c(undefined8 param_1)

{
  FUN_0010248a(param_1);
  return;
}




void FUN_00102a2d(void)

{
  return;
}




void FUN_00101a1a(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101dae(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101df8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102120(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c6e(void)

{
  return;
}




ulong FUN_001028a8(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001020cc(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a0c(void)

{
  return;
}




undefined8 FUN_00101d5d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102074(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010220b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102370(param_1,param_2,param_3);
  return;
}




void FUN_001025b5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b1c(undefined8 param_1)

{
  FUN_00101c7e(param_1);
  FUN_00101a50(param_1);
  return;
}




void FUN_00101c4e(undefined8 param_1)

{
  FUN_00101ef2(param_1);
  return;
}




void FUN_00102120(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102370(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029eb(void)

{
  return;
}




void FUN_00102a4e(void)

{
  return;
}




void FUN_00102a64(void)

{
  return;
}




void FUN_001029e0(void)

{
  return;
}




void FUN_00102a01(void)

{
  return;
}




long FUN_00102318(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001024b4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102be4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001020de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020cc(param_2);
  FUN_001020a2(param_1,uVar1);
  FUN_001019fa(param_1);
  return;
}




void FUN_001020a2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010233a(param_1,param_2);
  return;
}




undefined8 FUN_0010175e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010196e(void)

{
  FUN_0010186f();
  return;
}




void FUN_00102534(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001022db(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f6d(param_3);
  FUN_001023d8(param_1,param_2,uVar1);
  return;
}




void FUN_00102a59(void)

{
  return;
}




void FUN_001016de(undefined8 *param_1)

{
  FUN_0010171e(*param_1);
  return;
}




void FUN_00101e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010213e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102188(&local_18);
    FUN_001021aa(local_10,uVar2);
    FUN_00102164(&local_18);
  }
  return;
}




undefined8 FUN_00102074(undefined8 param_1,undefined8 param_2)

{
  FUN_001020a2(param_1,param_2);
  return param_1;
}




void FUN_00101cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f6d(param_3);
  p_Var2 = (_List_node_base *)FUN_00101f80(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010204a(param_1,1);
  return;
}




void FUN_001021aa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f6d(param_2);
  uVar2 = FUN_0010166e(param_1);
  FUN_00101cfc(param_1,uVar2,uVar1);
  return;
}




ulong FUN_001027a4(long param_1,ulong param_2,long param_3)

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




undefined8 * FUN_00102164(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102262(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023c5(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102560(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102711(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102cf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010233a(void)

{
  return;
}




void FUN_001014c9(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101610(param_1);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_001024b4(__dest);
  if (__dest != (void *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020cc(param_2);
  FUN_001020de(param_1,uVar1);
  return;
}




void FUN_00101a90(undefined8 param_1)

{
  FUN_00101a70(param_1);
  return;
}




void FUN_00101afc(undefined8 param_1)

{
  FUN_00101c6e(param_1);
  return;
}




void FUN_00101b82(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dae(param_2);
  FUN_00101d5d(&local_21,uVar1);
  FUN_00101dc0(param_1,&local_21);
  FUN_00101afc(&local_21);
  uVar1 = FUN_00101e48(param_2);
  uVar2 = FUN_00101df8(param_2);
                    /* try { // try from 00101c0e to 00101c12 has its CatchHandler @ 00101c15 */
  FUN_00101e94(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102636(undefined4 param_1)

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




void FUN_0010260b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102a17(void)

{
  return;
}



