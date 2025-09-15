
void FUN_001014aa(undefined8 *param_1)

{
  printf((char *)*param_1);
  return;
}




void FUN_001015e7(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pvVar1 = operator_new(8);
                    /* try { // try from 00101691 to 00101695 has its CatchHandler @ 001016c0 */
  FUN_0010146a(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_001014aa(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016fd(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pvVar1 = operator_new(8);
                    /* try { // try from 001017a7 to 001017ab has its CatchHandler @ 001017d6 */
  FUN_0010192c(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_001019a2(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a1c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101f69(void)

{
  return;
}




void FUN_00101c21(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001019c4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f00)();
  return;
}




undefined8 FUN_00102117(undefined8 *param_1)

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




void FUN_00101f11(void)

{
  return;
}




void FUN_00101ef0(void)

{
  return;
}




void FUN_00101f5e(void)

{
  return;
}




void FUN_00102200(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_001019ea(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101e97(void)

{
  return 1;
}




undefined8 FUN_00101fcc(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f95,local_18);
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




undefined8 FUN_00101828(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001019c4("Calling good()...");
  FUN_00101813();
  FUN_001019c4("Finished good()");
  FUN_001019c4("Calling bad()...");
  FUN_001014d1();
  FUN_001019c4("Finished bad()");
  return 0;
}




int FUN_00101eb5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f48(void)

{
  return;
}




void FUN_00101f27(void)

{
  return;
}




void FUN_00101bf3(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101efb(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101a9a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101f3d(void)

{
  return;
}




void FUN_00102190(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




bool FUN_00102099(pthread_t *param_1)

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




void FUN_00101813(void)

{
  FUN_001015e7();
  FUN_001016fd();
  return;
}




void FUN_00101a70(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f7f(void)

{
  return;
}




void FUN_00101f74(void)

{
  return;
}




void FUN_001021af(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013b0();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_001014d1(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pvVar1 = operator_new(8);
                    /* try { // try from 0010157b to 0010157f has its CatchHandler @ 001015aa */
  FUN_0010188e(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101904(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f95(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101f06(void)

{
  return;
}




void FUN_00101f8a(void)

{
  return;
}




void FUN_00101ee5(void)

{
  return;
}




void FUN_00101bc8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001019a2(undefined8 *param_1)

{
  puts((char *)*param_1);
  return;
}




void FUN_0010146a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return;
}




void FUN_00102270(void)

{
  return;
}




void FUN_00101ba0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c54(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f32(void)

{
  return;
}




void FUN_0010188e(long *param_1,long param_2)

{
  size_t sVar1;
  char *__src;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat((char *)(*param_1 + sVar1),__src,99 - sVar1);
  }
  return;
}




ulong FUN_00101cb4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a44(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101904(undefined8 *param_1)

{
  printf((char *)*param_1);
  return;
}




void FUN_0010192c(long *param_1,long param_2)

{
  size_t sVar1;
  char *__src;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  __src = getenv("ADD");
  if (__src != (char *)0x0) {
    strncat((char *)(*param_1 + sVar1),__src,99 - sVar1);
  }
  return;
}




void FUN_00101ac5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_00101db8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f53(void)

{
  return;
}




void FUN_00101af0(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_001020f4(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101eda(void)

{
  return;
}




undefined8 FUN_00101ea6(void)

{
  return 0;
}




void FUN_001021ce(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b1b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ecf(void)

{
  return;
}




void FUN_00101f1c(void)

{
  return;
}




void FUN_00101b46(undefined4 param_1)

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



