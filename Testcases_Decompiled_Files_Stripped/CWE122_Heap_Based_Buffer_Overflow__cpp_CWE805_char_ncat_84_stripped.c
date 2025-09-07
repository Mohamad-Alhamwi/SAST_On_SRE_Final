
void FUN_001014ca(long *param_1)

{
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat((char *)*param_1,local_78,100);
  FUN_001017aa(*param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)*param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015a0(long *param_1)

{
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(local_78,0x43,99);
  local_15 = 0;
  strncat((char *)*param_1,local_78,100);
  FUN_001017aa(*param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)*param_1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101635(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101663 to 00101667 has its CatchHandler @ 0010168c */
  FUN_0010148a(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_001014ca(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101880(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d70(void)

{
  return;
}




ulong FUN_00101b9e(long param_1,ulong param_2,long param_3)

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




void FUN_0010182a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef8)();
  return;
}




void FUN_00101fb4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d18(void)

{
  return;
}




void FUN_00101cf7(void)

{
  return;
}




void FUN_00101d65(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00101856(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101cb5(void)

{
  return;
}




undefined8 FUN_00101efd(undefined8 *param_1)

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




void FUN_00101735(void)

{
  FUN_001016b5();
  return;
}




void FUN_00101ccb(void)

{
  return;
}




void FUN_00101d4f(void)

{
  return;
}




void FUN_00101d2e(void)

{
  return;
}




ulong FUN_00101a9a(long param_1,ulong param_2,long param_3)

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




void FUN_00101d02(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101901(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d44(void)

{
  return;
}




void FUN_00101fe0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f76(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001016b5(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001016e3 to 001016e7 has its CatchHandler @ 0010170c */
  FUN_00101560(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_001015a0(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_001018d6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101db2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d7b,local_18);
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




void FUN_00101d7b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102050(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013d0();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_00101560(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = operator_new__(100);
  *param_1 = pvVar1;
  *(undefined *)*param_1 = 0;
  return;
}




undefined8 FUN_00101eda(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d0d(void)

{
  return;
}




bool FUN_00101e7f(pthread_t *param_1)

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




void FUN_00101cec(void)

{
  return;
}




void FUN_00101a3a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101802(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010148a(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = operator_new__(0x32);
  *param_1 = pvVar1;
  *(undefined *)*param_1 = 0;
  return;
}




void FUN_00101a07(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101c7d(void)

{
  return 1;
}




void FUN_00101d39(void)

{
  return;
}




undefined8 FUN_00101745(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017aa("Calling good()...");
  FUN_00101735();
  FUN_001017aa("Finished good()");
  FUN_001017aa("Calling bad()...");
  FUN_00101635();
  FUN_001017aa("Finished bad()");
  return 0;
}




undefined8 FUN_00101c8c(void)

{
  return 0;
}




void FUN_001018ab(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017aa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001017d0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010192c(undefined4 param_1)

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




int FUN_00101c9b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101d5a(void)

{
  return;
}




void FUN_00101986(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f95(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101ce1(void)

{
  return;
}




void FUN_00101cc0(void)

{
  return;
}




void FUN_001019ae(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101cd6(void)

{
  return;
}




void FUN_00101d23(void)

{
  return;
}




void FUN_001019d9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}



