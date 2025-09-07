
/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_00102d52(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102d1b,local_18);
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




void FUN_00101ee4(undefined8 param_1)

{
  FUN_00102188(param_1);
  return;
}




bool FUN_00102e1f(pthread_t *param_1)

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




void FUN_001021d4(undefined8 param_1,undefined8 param_2)

{
  FUN_001024a1(param_1,param_2,1);
  return;
}




void FUN_0010241e(undefined8 *param_1)

{
  FUN_001025e4(*param_1);
  return;
}




void FUN_0010274a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001027ca(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001022e0(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102732(void)

{
  return 0x555555555555555;
}




void FUN_00102d10(void)

{
  return;
}




void FUN_0010266e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102203(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101c79(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101d26(undefined8 param_1)

{
  FUN_00101d06(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102c97(void)

{
  return;
}




void FUN_00102ca2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00102cad(void)

{
  return;
}




void FUN_00102188(void)

{
  return;
}




void FUN_00102056(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102362(param_2);
  FUN_00102374(param_1,uVar1);
  return;
}




void FUN_001017b8(undefined8 *param_1)

{
  FUN_001017f8(*param_1);
  return;
}




void FUN_001023b6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010212a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_001023d4(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010241e(&local_18);
    FUN_00102440(local_10,uVar2);
    FUN_001023fa(&local_18);
  }
  return;
}




void FUN_00101dde(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101748(param_1);
  FUN_00101f92(param_1,uVar1,param_2);
  return;
}




void FUN_001024d4(undefined8 param_1)

{
  FUN_0010262d(param_1,1);
  return;
}




void FUN_00101d06(undefined8 param_1)

{
  FUN_00101d66(param_1);
  return;
}




void FUN_00101d46(undefined8 param_1)

{
  FUN_00101db2(param_1);
  return;
}




undefined8 FUN_00102720(undefined8 param_1)

{
  return param_1;
}




void FUN_00102770(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102532(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001024a1(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101988(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d26(local_58);
  local_68 = (void *)0x0;
  local_60 = malloc(0x32);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  local_68 = local_60;
                    /* try { // try from 00101a0e to 00101a4b has its CatchHandler @ 00101a97 */
  FUN_00101dde(local_58,&local_68);
  FUN_00101dde(local_58,&local_68);
  FUN_00101dde(local_58,&local_68);
  FUN_00101e18(local_38,local_58);
                    /* try { // try from 00101a53 to 00101a57 has its CatchHandler @ 00101a82 */
  FUN_001015d4(local_38);
  FUN_00101d46(local_38);
  FUN_00101d46(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bff(void)

{
  FUN_00101988();
  FUN_00101ac1();
  return;
}




void FUN_00101d92(undefined8 param_1)

{
  FUN_00101f04(param_1);
  return;
}




undefined8 FUN_00102c1d(void)

{
  return 1;
}




void FUN_00102ce4(void)

{
  return;
}




void FUN_001029da(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102571(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102203(param_3);
  FUN_0010266e(param_1,param_2,uVar1);
  return;
}




void FUN_00102876(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001017f8(long param_1)

{
  FUN_0010181a(param_1 + 0x10);
  return;
}




void FUN_0010284b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102198(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c2c(void)

{
  return 0;
}




void FUN_00102c55(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




void FUN_0010262d(undefined8 param_1,undefined8 param_2)

{
  FUN_001026d0(param_1,param_2,0);
  return;
}




undefined8 FUN_0010230a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102338(param_1,param_2);
  return param_1;
}




void FUN_00102606(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102cce(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  wchar_t *__src;
  undefined8 *puVar1;
  size_t sVar2;
  wchar_t *__dest;
  
  puVar1 = (undefined8 *)FUN_001016ea(param_1);
  __src = (wchar_t *)*puVar1;
  sVar2 = strlen((char *)__src);
  __dest = (wchar_t *)calloc(sVar2 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__src);
  FUN_0010274a(__dest);
  free(__dest);
  return;
}




void FUN_00102cc3(void)

{
  return;
}




void FUN_00101db2(undefined8 param_1)

{
  FUN_00101f14(param_1);
  FUN_00101ce6(param_1);
  return;
}




void FUN_001028cc(undefined4 param_1)

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




undefined8 FUN_0010265b(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102362(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101838(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f04(void)

{
  return;
}




void FUN_00102ff0(void)

{
  return;
}




undefined8 FUN_00102e7a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101cb0(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_001026b2(undefined8 param_1)

{
  FUN_00102720(param_1);
  return;
}




void FUN_00102f80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001028a1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102338(undefined8 param_1,undefined8 param_2)

{
  FUN_001025d0(param_1,param_2);
  return;
}




void FUN_00102cd9(void)

{
  return;
}




undefined8 FUN_00101ff3(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010230a(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102374(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102362(param_2);
  FUN_00102338(param_1,uVar1);
  FUN_00101c90(param_1);
  return;
}




void FUN_00101d66(undefined8 param_1)

{
  FUN_00101ee4(param_1);
  FUN_00101c90(param_1);
  return;
}




void FUN_00102cfa(void)

{
  return;
}




void FUN_001024f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010265b(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102c8c(void)

{
  return;
}




void FUN_00102cef(void)

{
  return;
}




undefined8 FUN_00102216(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024d4(param_1);
  uVar2 = FUN_00102198(param_1);
  FUN_001024f8(local_38,uVar2,uVar1);
  uVar3 = FUN_00102203(param_2);
  uVar4 = FUN_001017f8(uVar1);
  FUN_00102571(uVar2,uVar4,uVar3);
  FUN_001025ae(local_38,0);
  FUN_00102532(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_001016ea(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101748(param_1);
  FUN_00101794(&local_18);
  FUN_001017b8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010248e(void)

{
  return;
}




void FUN_001027f6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010184a(void)

{
  long in_FS_OFFSET;
  wchar_t *local_68;
  wchar_t *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d26(local_58);
  local_68 = (wchar_t *)0x0;
  local_60 = (wchar_t *)malloc(200);
  if (local_60 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(local_60,L'A',0x31);
  local_60[0x31] = L'\0';
  local_68 = local_60;
                    /* try { // try from 001018d5 to 00101912 has its CatchHandler @ 0010195e */
  FUN_00101dde(local_58,&local_68);
  FUN_00101dde(local_58,&local_68);
  FUN_00101dde(local_58,&local_68);
  FUN_00101e18(local_38,local_58);
                    /* try { // try from 0010191a to 0010191e has its CatchHandler @ 00101949 */
  FUN_00101549(local_38);
  FUN_00101d46(local_38);
  FUN_00101d46(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102820(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102044(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f54(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ce6(undefined8 param_1)

{
  FUN_00101d92(param_1);
  return;
}




long * FUN_00101794(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 * FUN_001023fa(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




long FUN_001025ae(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001025e4(long param_1)

{
  FUN_001026b2(param_1 + 0x10);
  return;
}




undefined8 FUN_001023d4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102440(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102203(param_2);
  uVar2 = FUN_00101748(param_1);
  FUN_00101f92(param_1,uVar2,uVar1);
  return;
}




ulong FUN_00102b3e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c79(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101e18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102044(param_2);
  FUN_00101ff3(&local_21,uVar1);
  FUN_00102056(param_1,&local_21);
  FUN_00101d92(&local_21);
  uVar1 = FUN_001020de(param_2);
  uVar2 = FUN_0010208e(param_2);
                    /* try { // try from 00101ea4 to 00101ea8 has its CatchHandler @ 00101eab */
  FUN_0010212a(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001026d0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102732(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102c6b(void)

{
  return;
}




void FUN_00102f35(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010165f(undefined8 param_1)

{
  wchar_t *__s;
  undefined8 *puVar1;
  size_t sVar2;
  wchar_t *__dest;
  
  puVar1 = (undefined8 *)FUN_001016ea(param_1);
  __s = (wchar_t *)*puVar1;
  sVar2 = wcslen(__s);
  __dest = (wchar_t *)calloc(sVar2 + 1,4);
  if (__dest == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wcscpy(__dest,__s);
  FUN_00102770(__dest);
  free(__dest);
  return;
}




undefined8 FUN_00101748(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017da(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00102a3a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00104090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e9d(undefined8 *param_1)

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




void FUN_00101f14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_001017f8(local_20);
    uVar3 = FUN_00102198(param_1);
    FUN_001021aa(uVar3,uVar2);
    FUN_001021d4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101c14(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010274a("Calling good()...");
  FUN_00101bff();
  FUN_0010274a("Finished good()");
  FUN_0010274a("Calling bad()...");
  FUN_0010184a();
  FUN_0010274a("Finished bad()");
  return 0;
}




void FUN_001025d0(void)

{
  return;
}




void FUN_00102c60(void)

{
  return;
}




void FUN_001029a7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




int FUN_00102c3b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102c76(void)

{
  return;
}




void FUN_00102d05(void)

{
  return;
}




void FUN_00102d1b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102f16(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001015d4(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
  puVar1 = (undefined8 *)FUN_001016ea(param_1);
  __s = (char *)*puVar1;
  sVar2 = strlen(__s);
  __dest = (char *)calloc(sVar2 + 1,1);
  if (__dest == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  strcpy(__dest,__s);
  FUN_0010274a(__dest);
  free(__dest);
  return;
}




void FUN_0010181a(undefined8 param_1)

{
  FUN_00101838(param_1);
  return;
}




undefined8 FUN_00102203(undefined8 param_1)

{
  return param_1;
}




void FUN_0010294e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c81(void)

{
  return;
}




void FUN_001017da(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101ac1(void)

{
  long in_FS_OFFSET;
  wchar_t *local_68;
  wchar_t *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d26(local_58);
  local_68 = (wchar_t *)0x0;
  local_60 = (wchar_t *)malloc(200);
  if (local_60 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  wmemset(local_60,L'A',0x31);
  local_60[0x31] = L'\0';
  local_68 = local_60;
                    /* try { // try from 00101b4c to 00101b89 has its CatchHandler @ 00101bd5 */
  FUN_00101dde(local_58,&local_68);
  FUN_00101dde(local_58,&local_68);
  FUN_00101dde(local_58,&local_68);
  FUN_00101e18(local_38,local_58);
                    /* try { // try from 00101b91 to 00101b95 has its CatchHandler @ 00101bc0 */
  FUN_0010165f(local_38);
  FUN_00101d46(local_38);
  FUN_00101d46(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102203(param_3);
  p_Var2 = (_List_node_base *)FUN_00102216(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001022e0(param_1,1);
  return;
}




void FUN_001021aa(undefined8 param_1,undefined8 param_2)

{
  FUN_0010248e(param_1,param_2);
  return;
}




void FUN_001027a2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102cb8(void)

{
  return;
}




void FUN_00101c90(undefined8 param_1)

{
  FUN_00101cb0(param_1);
  return;
}




void FUN_00102926(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102979(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001020de(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b6(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010208e(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023b6(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001024a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102606(param_1,param_2,param_3);
  return;
}



