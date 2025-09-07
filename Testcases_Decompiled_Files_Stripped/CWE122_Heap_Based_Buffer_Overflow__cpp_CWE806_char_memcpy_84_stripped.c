
void FUN_001015b6(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = operator_new__(100);
  pvVar2 = operator_new(8);
                    /* try { // try from 001015ea to 001015ee has its CatchHandler @ 00101613 */
  FUN_00101738(pvVar2,pvVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_00101782(pvVar2);
    operator_delete(pvVar2,8);
  }
  return;
}




void FUN_001016c2(void)

{
  FUN_0010163c();
  return;
}




undefined8 FUN_001016d2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101844("Calling good()...");
  FUN_001016c2();
  FUN_00101844("Finished good()");
  FUN_00101844("Calling bad()...");
  FUN_001015b6();
  FUN_00101844("Finished bad()");
  return 0;
}




void FUN_00101945(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e15(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101d17(void)

{
  return 1;
}




void FUN_001018f0(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102080(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101dbd(void)

{
  return;
}




void FUN_00101d9c(void)

{
  return;
}




void FUN_00101e0a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_0010191a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d5a(void)

{
  return;
}




void FUN_00102010(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101782(long *param_1)

{
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen((char *)*param_1);
  memcpy(&local_48,(void *)*param_1,__n);
  local_18 = local_18 & 0xff;
  FUN_00101844(*param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)*param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d70(void)

{
  return;
}




void FUN_00101df4(void)

{
  return;
}




void FUN_00101dd3(void)

{
  return;
}




ulong FUN_00101c38(long param_1,ulong param_2,long param_3)

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




void FUN_00101da7(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013f0();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_001019c6(undefined4 param_1)

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




void FUN_00101de9(void)

{
  return;
}




void FUN_001020f0(void)

{
  return;
}




void FUN_0010202f(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101738(long *param_1,long param_2)

{
  *param_1 = param_2;
  memset((void *)*param_1,0x41,99);
  *(undefined *)(*param_1 + 99) = 0;
  return;
}




void FUN_0010199b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00101f19(pthread_t *param_1)

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




undefined8 FUN_00101e4c(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e15,local_18);
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




void FUN_001014aa(long *param_1,long param_2)

{
  *param_1 = param_2;
  memset((void *)*param_1,0x41,0x31);
  *(undefined *)(*param_1 + 0x31) = 0;
  return;
}




void FUN_0010163c(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = operator_new__(100);
  pvVar2 = operator_new(8);
                    /* try { // try from 00101670 to 00101674 has its CatchHandler @ 00101699 */
  FUN_001014aa(pvVar2,pvVar1);
  if (pvVar2 != (void *)0x0) {
    FUN_001014f4(pvVar2);
    operator_delete(pvVar2,8);
  }
  return;
}




undefined8 FUN_00101f97(undefined8 *param_1)

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




void FUN_00101db2(void)

{
  return;
}




undefined8 FUN_00101f74(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d91(void)

{
  return;
}




ulong FUN_00101b34(long param_1,ulong param_2,long param_3)

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




void FUN_001018c4(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001014f4(long *param_1)

{
  size_t __n;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  __n = strlen((char *)*param_1);
  memcpy(&local_48,(void *)*param_1,__n);
  local_18 = local_18 & 0xff;
  FUN_00101844(*param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)*param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ad4(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101d26(void)

{
  return 0;
}




void FUN_00101dde(void)

{
  return;
}




void FUN_00101844(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




int FUN_00101d35(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_0010186a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010189c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101970(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a20(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d4f(void)

{
  return;
}




void FUN_00101dff(void)

{
  return;
}




void FUN_00101a48(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010204e(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d86(void)

{
  return;
}




void FUN_00101d65(void)

{
  return;
}




void FUN_00101a73(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d7b(void)

{
  return;
}




void FUN_00101dc8(void)

{
  return;
}




void FUN_00101aa1(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}



