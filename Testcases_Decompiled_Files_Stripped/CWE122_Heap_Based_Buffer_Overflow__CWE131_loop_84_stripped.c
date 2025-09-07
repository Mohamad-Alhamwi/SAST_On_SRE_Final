
void FUN_001018c2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ca1(void)

{
  return;
}




void FUN_00101cb7(void)

{
  return;
}




void FUN_00101cc2(void)

{
  return;
}




void FUN_0010142a(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(10);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}




void FUN_00101526(long *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(0x28);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}




void FUN_00101d25(void)

{
  return;
}




void FUN_00101f62(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d0f(void)

{
  return;
}




void FUN_00101a26(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101721(void)

{
  FUN_001016a1();
  return;
}




void FUN_001018ed(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00101b8a(long param_1,ulong param_2,long param_3)

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




void FUN_00101d1a(void)

{
  return;
}




void FUN_00102040(void)

{
  return;
}




void FUN_0010199a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101cd8(void)

{
  return;
}




void FUN_001017ee(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101ee9(undefined8 *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104f10)();
  return;
}




undefined8 FUN_00101c69(void)

{
  return 1;
}




undefined8 FUN_00101731(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101796("Calling good()...");
  FUN_00101721();
  FUN_00101796("Finished good()");
  FUN_00101796("Calling bad()...");
  FUN_00101621();
  FUN_00101796("Finished bad()");
  return 0;
}




void FUN_001016a1(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001016cf to 001016d3 has its CatchHandler @ 001016f8 */
  FUN_00101526(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101572(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101d46(void)

{
  return;
}




void FUN_00101572(long *param_1)

{
  long in_FS_OFFSET;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    *(undefined4 *)(local_40 * 4 + *param_1) = *(undefined4 *)((long)&local_38 + local_40 * 4);
  }
  FUN_001017ee(*(undefined4 *)*param_1);
  free((void *)*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101ccd(void)

{
  return;
}




void FUN_00101d3b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_001017bc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101c78(void)

{
  return 0;
}




void FUN_00101cac(void)

{
  return;
}




void FUN_00101476(long *param_1)

{
  long in_FS_OFFSET;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    *(undefined4 *)(local_40 * 4 + *param_1) = *(undefined4 *)((long)&local_38 + local_40 * 4);
  }
  FUN_001017ee(*(undefined4 *)*param_1);
  free((void *)*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010186c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101972(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101370();
    DAT_00105020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101ec6(void *param_1)

{
  free(param_1);
  return 1;
}




int FUN_00101c87(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d04(void)

{
  return;
}




bool FUN_00101e6b(pthread_t *param_1)

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




void FUN_00101f81(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ce3(void)

{
  return;
}




void FUN_00101fa0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101816(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101897(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019f3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101cee(void)

{
  return;
}




void FUN_00101cf9(void)

{
  return;
}




void FUN_00101d30(void)

{
  return;
}




void FUN_001019c5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d51(void)

{
  return;
}




void FUN_00101d5c(void)

{
  return;
}




void FUN_00101fd0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101918(undefined4 param_1)

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




void FUN_00101796(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101842(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101d67(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101621(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 0010164f to 00101653 has its CatchHandler @ 00101678 */
  FUN_0010142a(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101476(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




undefined8 FUN_00101d9e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d67,local_18);
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




ulong FUN_00101a86(long param_1,ulong param_2,long param_3)

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



