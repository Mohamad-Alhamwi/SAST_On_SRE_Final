
void FUN_00101e94(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101798(undefined8 param_1)

{
  FUN_00101804(param_1);
  return;
}




void FUN_00101bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00101eb2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101efc(&local_18);
    FUN_00101f1e(local_10,uVar2);
    FUN_00101ed8(&local_18);
  }
  return;
}




void FUN_001021dc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010223e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101c58(undefined8 param_1)

{
  return param_1;
}




void FUN_00102951(void)

{
  return;
}




void FUN_00101f8a(void)

{
  return;
}




void FUN_001029e0(void)

{
  return;
}




void FUN_00102cd0(void)

{
  return;
}




void FUN_0010202e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101f9d(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_00102a2d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001029f6,local_18);
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




void FUN_00101738(undefined8 param_1)

{
  FUN_001017e4(param_1);
  return;
}




ulong FUN_00102819(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010223e(void)

{
  return 0x555555555555555;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102114(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010222c(undefined8 param_1)

{
  return param_1;
}




void FUN_00101956(void)

{
  return;
}




void FUN_001029bf(void)

{
  return;
}




void FUN_00102993(void)

{
  return;
}




undefined8 FUN_00102169(undefined8 param_1)

{
  return param_1;
}




void FUN_0010244b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102c10(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 * FUN_00101ed8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_001029b4(void)

{
  return;
}




undefined8 FUN_00101de8(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e16(param_1,param_2);
  return param_1;
}




void FUN_0010293b(void)

{
  return;
}




ulong FUN_00102715(long param_1,ulong param_2,long param_3)

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




void FUN_00101966(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c36(local_20);
    uVar3 = FUN_00101c58(param_1);
    FUN_00101c6a(uVar3,uVar2);
    FUN_00101c94(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_001028f8(void)

{
  return 1;
}




void FUN_00102551(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001025a7(undefined4 param_1)

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




int FUN_00102916(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101657(void)

{
  FUN_00101560();
  return;
}




void FUN_00101e16(undefined8 param_1,undefined8 param_2)

{
  FUN_001020cc(param_1,param_2);
  return;
}




void FUN_00101778(undefined8 param_1)

{
  FUN_00101758(param_1);
  return;
}




void FUN_00101a30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101ce2(param_3);
  p_Var2 = (_List_node_base *)FUN_00101cf4(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101dbe(param_1,1);
  return;
}




void FUN_001024a5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029ca(void)

{
  return;
}




void FUN_0010217c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101ce2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_001016cc(4,param_2);
  *puVar2 = uVar1;
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




undefined8 FUN_001019e4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101cc4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dbe(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102afa(pthread_t *param_1)

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




void FUN_00101c6a(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f8a(param_1,param_2);
  return;
}




void FUN_00102256(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00102382(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010247d(*__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101b7c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e94(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102930(void)

{
  return;
}




undefined8 FUN_00101b2c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e94(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101af4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e40(param_2);
  FUN_00101e52(param_1,uVar1);
  return;
}




void FUN_00101c36(long param_1)

{
  FUN_00101f6c(param_1 + 0x10);
  return;
}




void FUN_00101702(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101804(undefined8 param_1)

{
  FUN_00101966(param_1);
  FUN_00101738(param_1);
  return;
}




undefined8 FUN_001016cc(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102b78(undefined8 *param_1)

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




void FUN_001024fb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010295c(void)

{
  return;
}




void FUN_001021be(undefined8 param_1)

{
  FUN_0010222c(param_1);
  return;
}




void FUN_00102682(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001017e4(undefined8 param_1)

{
  FUN_00101956(param_1);
  return;
}




void FUN_00101560(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101778(local_58);
  local_5c = 0x14;
                    /* try { // try from 001015a4 to 001015e1 has its CatchHandler @ 0010162d */
  FUN_00101830(local_58,&local_5c);
  FUN_00101830(local_58,&local_5c);
  FUN_00101830(local_58,&local_5c);
  FUN_0010186a(local_38,local_58);
                    /* try { // try from 001015e9 to 001015ed has its CatchHandler @ 00101618 */
  FUN_001022ec(local_38);
  FUN_00101798(local_38);
  FUN_00101798(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101758(undefined8 param_1)

{
  FUN_001017b8(param_1);
  return;
}




void FUN_00101cc4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101ce2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101a91(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101de8(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101e52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e40(param_2);
  FUN_00101e16(param_1,uVar1);
  FUN_001016e2(param_1);
  return;
}




undefined8 FUN_00102b55(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010297d(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102bf1(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101efc(undefined8 *param_1)

{
  FUN_001020e0(*param_1);
  return;
}




undefined8 FUN_00102907(void)

{
  return 0;
}




void FUN_001016e2(undefined8 param_1)

{
  FUN_00101702(param_1);
  return;
}




undefined8 FUN_00101e40(undefined8 param_1)

{
  return param_1;
}




void FUN_001020cc(void)

{
  return;
}




undefined8 FUN_00102102(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ff4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102169(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001029f6(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long * FUN_001023e0(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




long FUN_001020aa(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102526(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102988(void)

{
  return;
}




void FUN_00101830(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001019e4(param_1);
  FUN_00101a30(param_1,uVar1,param_2);
  return;
}




void FUN_00101f6c(undefined8 param_1)

{
  FUN_00102102(param_1);
  return;
}




void FUN_00101fd0(undefined8 param_1)

{
  FUN_0010213b(param_1,1);
  return;
}




void FUN_00102425(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001026b5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102c60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102c2f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102629(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102946(void)

{
  return;
}




void FUN_001017b8(undefined8 param_1)

{
  FUN_00101936(param_1);
  FUN_001016e2(param_1);
  return;
}




void FUN_00102404(undefined8 *param_1)

{
  FUN_00101c36(*param_1);
  return;
}




void FUN_00102382(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001019e4(param_1);
  FUN_001023e0(&local_18);
  FUN_00102404(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c94(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f9d(param_1,param_2,1);
  return;
}




undefined8 FUN_00101cf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101fd0(param_1);
  uVar2 = FUN_00101c58(param_1);
  FUN_00101ff4(local_38,uVar2,uVar1);
  uVar3 = FUN_00101ce2(param_2);
  uVar4 = FUN_00101c36(uVar1);
  FUN_0010206d(uVar2,uVar4,uVar3);
  FUN_001020aa(local_38,0);
  FUN_0010202e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102967(void)

{
  return;
}




void FUN_00102601(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010186a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ae2(param_2);
  FUN_00101a91(&local_21,uVar1);
  FUN_00101af4(param_1,&local_21);
  FUN_001017e4(&local_21);
  uVar1 = FUN_00101b7c(param_2);
  uVar2 = FUN_00101b2c(param_2);
                    /* try { // try from 001018f6 to 001018fa has its CatchHandler @ 001018fd */
  FUN_00101bc8(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c26(void)

{
  return;
}




void FUN_0010213b(undefined8 param_1,undefined8 param_2)

{
  FUN_001021dc(param_1,param_2,0);
  return;
}




void FUN_001022ec(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00102382(param_1);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010247d(*__ptr);
  free(__ptr);
  return;
}




void FUN_0010206d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ce2(param_3);
  FUN_0010217c(param_1,param_2,uVar1);
  return;
}




void FUN_001024d1(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029eb(void)

{
  return;
}




void FUN_00101936(undefined8 param_1)

{
  FUN_00101c26(param_1);
  return;
}




void FUN_0010247d(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010257c(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102972(void)

{
  return;
}




void FUN_001029d5(void)

{
  return;
}




void FUN_00102654(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101ae2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101667(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102425("Calling good()...");
  FUN_00101657();
  FUN_00102425("Finished good()");
  FUN_00102425("Calling bad()...");
  FUN_00101469();
  FUN_00102425("Finished bad()");
  return 0;
}




void FUN_001020e0(long param_1)

{
  FUN_001021be(param_1 + 0x10);
  return;
}




void FUN_00101469(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101778(local_58);
  local_5c = 0x40000001;
                    /* try { // try from 001014ad to 001014ea has its CatchHandler @ 00101536 */
  FUN_00101830(local_58,&local_5c);
  FUN_00101830(local_58,&local_5c);
  FUN_00101830(local_58,&local_5c);
  FUN_0010186a(local_38,local_58);
                    /* try { // try from 001014f2 to 001014f6 has its CatchHandler @ 00101521 */
  FUN_00102256(local_38);
  FUN_00101798(local_38);
  FUN_00101798(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101eb2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101f1e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ce2(param_2);
  uVar2 = FUN_001019e4(param_1);
  FUN_00101a30(param_1,uVar2,uVar1);
  return;
}




void FUN_00101f9d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102114(param_1,param_2,param_3);
  return;
}




void FUN_001029a9(void)

{
  return;
}




void FUN_0010299e(void)

{
  return;
}



