
void FUN_00101ebe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102168(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021b2(&local_18);
    FUN_001021d4(local_10,uVar2);
    FUN_0010218e(&local_18);
  }
  return;
}




void FUN_00101708(undefined8 *param_1)

{
  FUN_00101748(*param_1);
  return;
}




void FUN_00101afa(undefined8 param_1)

{
  FUN_00101c78(param_1);
  FUN_00101a24(param_1);
  return;
}




void FUN_001022c6(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102235(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101b72(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101698(param_1);
  FUN_00101d26(param_1,uVar1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_001029c0(void)

{
  return 0;
}




undefined8 FUN_00101faa(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102268(param_1);
  uVar2 = FUN_00101f2c(param_1);
  FUN_0010228c(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f97(param_2);
  uVar4 = FUN_00101748(uVar1);
  FUN_00102305(uVar2,uVar4,uVar3);
  FUN_00102342(local_38,0);
  FUN_001022c6(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a62(void)

{
  return;
}




undefined8 FUN_00102c31(undefined8 *param_1)

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




undefined8 FUN_001020f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a83(void)

{
  return;
}




void FUN_0010163a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101698(param_1);
  FUN_001016e4(&local_18);
  FUN_00101708(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
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
    FUN_001013f0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_001026e2(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




long FUN_00102342(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001021d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f97(param_2);
  uVar2 = FUN_00101698(param_1);
  FUN_00101d26(param_1,uVar2,uVar1);
  return;
}




void FUN_00102305(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f97(param_3);
  FUN_00102402(param_1,param_2,uVar1);
  return;
}




void FUN_00101998(void)

{
  FUN_00101899();
  return;
}




void FUN_00102a41(void)

{
  return;
}




void FUN_00102a15(void)

{
  return;
}




void FUN_00102235(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010239a(param_1,param_2,param_3);
  return;
}




void FUN_00102446(undefined8 param_1)

{
  FUN_001024b4(param_1);
  return;
}




undefined8 FUN_00102ae6(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aaf,local_18);
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




undefined8 FUN_00101f2c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a36(void)

{
  return;
}




undefined8 FUN_00101dd8(undefined8 param_1)

{
  return param_1;
}




ulong FUN_001028d2(long param_1,ulong param_2,long param_3)

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




void FUN_001026ba(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001019a8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024de("Calling good()...");
  FUN_00101998();
  FUN_001024de("Finished good()");
  FUN_001024de("Calling bad()...");
  FUN_0010179a();
  FUN_001024de("Finished bad()");
  return 0;
}




void FUN_0010270d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102536(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010258a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010276e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00101dea(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f6(param_2);
  FUN_00102108(param_1,uVar1);
  return;
}




long * FUN_001016e4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101a24(undefined8 param_1)

{
  FUN_00101a44(param_1);
  return;
}




undefined8 FUN_001024b4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a4c(void)

{
  return;
}




void FUN_00102268(undefined8 param_1)

{
  FUN_001023c1(param_1,1);
  return;
}




undefined8 FUN_00101a0d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101d87(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010209e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a8e(void)

{
  return;
}




void FUN_00101bac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dd8(param_2);
  FUN_00101d87(&local_21,uVar1);
  FUN_00101dea(param_1,&local_21);
  FUN_00101b26(&local_21);
  uVar1 = FUN_00101e72(param_2);
  uVar2 = FUN_00101e22(param_2);
                    /* try { // try from 00101c38 to 00101c3c has its CatchHandler @ 00101c3f */
  FUN_00101ebe(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102364(void)

{
  return;
}




void FUN_00101ada(undefined8 param_1)

{
  FUN_00101b46(param_1);
  return;
}




ulong FUN_001027ce(long param_1,ulong param_2,long param_3)

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




void FUN_00101aba(undefined8 param_1)

{
  FUN_00101a9a(param_1);
  return;
}




void FUN_00101a9a(undefined8 param_1)

{
  FUN_00101afa(param_1);
  return;
}




void FUN_00101b46(undefined8 param_1)

{
  FUN_00101ca8(param_1);
  FUN_00101a7a(param_1);
  return;
}




void FUN_00101571(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_0010163a(param_1);
  pvVar1 = (void *)*puVar2;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar3 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar3 + 1; local_38 = local_38 + 1) {
    *(char *)((long)pvVar1 + local_38) = local_1b[local_38];
  }
  FUN_001024de(pvVar1);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010176a(undefined8 param_1)

{
  FUN_00101788(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102aa4(void)

{
  return;
}




void FUN_001024de(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




int FUN_001029cf(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010228c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023ef(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102635(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101748(long param_1)

{
  FUN_0010176a(param_1 + 0x10);
  return;
}




undefined8 FUN_00101698(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010172a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c98(void)

{
  return;
}




void FUN_00101ca8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101748(local_20);
    uVar3 = FUN_00101f2c(param_1);
    FUN_00101f3e(uVar3,uVar2);
    FUN_00101f68(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_00101a44(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101e72(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a99(void)

{
  return;
}




void FUN_001029ff(void)

{
  return;
}




void FUN_00102aaf(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f3e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102222(param_1,param_2);
  return;
}




void FUN_0010273b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001014a9(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)FUN_0010163a(param_1);
  pvVar1 = (void *)*puVar2;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar3 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar3 + 1; local_38 = local_38 + 1) {
    *(char *)((long)pvVar1 + local_38) = local_1b[local_38];
  }
  FUN_001024de(pvVar1);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e22(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102168(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102d90(void)

{
  return;
}




void FUN_001021b2(undefined8 *param_1)

{
  FUN_00102378(*param_1);
  return;
}




void FUN_001020cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102364(param_1,param_2);
  return;
}




void FUN_00102a78(void)

{
  return;
}




void FUN_001023c1(undefined8 param_1,undefined8 param_2)

{
  FUN_00102464(param_1,param_2,0);
  return;
}




void FUN_00102cc9(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010214a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102504(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102a0a(void)

{
  return;
}




undefined8 FUN_00101788(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f97(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010209e(undefined8 param_1,undefined8 param_2)

{
  FUN_001020cc(param_1,param_2);
  return param_1;
}




void FUN_00102402(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f97(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a0d(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102660(undefined4 param_1)

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




undefined8 FUN_00102c0e(void *param_1)

{
  free(param_1);
  return 1;
}




bool FUN_00102bb3(pthread_t *param_1)

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




void FUN_00102caa(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001025df(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001029b1(void)

{
  return 1;
}




void FUN_0010172a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001023ef(undefined8 param_1)

{
  return param_1;
}




void FUN_0010239a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00101c78(undefined8 param_1)

{
  FUN_00101f1c(param_1);
  return;
}




void FUN_00101d26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f97(param_3);
  p_Var2 = (_List_node_base *)FUN_00101faa(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102074(param_1,1);
  return;
}




void FUN_001029e9(void)

{
  return;
}




void FUN_001025b4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010179a(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aba(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001017cf to 00101823 has its CatchHandler @ 0010186f */
  local_60 = operator_new__(10);
  FUN_00101b72(local_58,&local_60);
  FUN_00101b72(local_58,&local_60);
  FUN_00101b72(local_58,&local_60);
  FUN_00101bac(local_38,local_58);
                    /* try { // try from 0010182b to 0010182f has its CatchHandler @ 0010185a */
  FUN_001014a9(local_38);
  FUN_00101ada(local_38);
  FUN_00101ada(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b26(undefined8 param_1)

{
  FUN_00101c98(param_1);
  return;
}




void FUN_00102222(void)

{
  return;
}




void FUN_00102378(long param_1)

{
  FUN_00102446(param_1 + 0x10);
  return;
}




void FUN_00102108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020f6(param_2);
  FUN_001020cc(param_1,uVar1);
  FUN_00101a24(param_1);
  return;
}




undefined8 FUN_001024c6(void)

{
  return 0x555555555555555;
}




void FUN_00102a6d(void)

{
  return;
}




void FUN_00101899(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aba(local_58);
  local_60 = (void *)0x0;
                    /* try { // try from 001018ce to 00101922 has its CatchHandler @ 0010196e */
  local_60 = operator_new__(0xb);
  FUN_00101b72(local_58,&local_60);
  FUN_00101b72(local_58,&local_60);
  FUN_00101b72(local_58,&local_60);
  FUN_00101bac(local_38,local_58);
                    /* try { // try from 0010192a to 0010192e has its CatchHandler @ 00101959 */
  FUN_00101571(local_38);
  FUN_00101ada(local_38);
  FUN_00101ada(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102464(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024c6(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_0010255e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029f4(void)

{
  return;
}




void FUN_00102a57(void)

{
  return;
}




void FUN_0010260a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a7a(undefined8 param_1)

{
  FUN_00101b26(param_1);
  return;
}




undefined8 * FUN_0010218e(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101f1c(void)

{
  return;
}




void FUN_00101f68(undefined8 param_1,undefined8 param_2)

{
  FUN_00102235(param_1,param_2,1);
  return;
}




void FUN_00102074(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a2b(void)

{
  return;
}




void FUN_00102a20(void)

{
  return;
}




void FUN_00102ce8(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}



