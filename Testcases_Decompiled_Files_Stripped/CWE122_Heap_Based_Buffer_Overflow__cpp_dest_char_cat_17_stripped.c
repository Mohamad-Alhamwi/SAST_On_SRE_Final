
void FUN_00101829(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_001018ea(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b7e(void)

{
  return;
}




void FUN_00101dc6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101e04(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101b1b(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101370();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101ea0(void)

{
  return;
}




void FUN_00101b52(void)

{
  return;
}




bool FUN_00101ccf(pthread_t *param_1)

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




void FUN_00101652(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




int FUN_00101aeb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016a6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101b47(void)

{
  return;
}




ulong FUN_001019ee(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101595(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001015fa("Calling good()...");
  FUN_00101585();
  FUN_001015fa("Finished good()");
  FUN_001015fa("Calling bad()...");
  FUN_00101429();
  FUN_001015fa("Finished bad()");
  return 0;
}




undefined8 FUN_00101adc(void)

{
  return 0;
}




void FUN_00101b89(void)

{
  return;
}




void FUN_00101bb5(void)

{
  return;
}




void FUN_00101b5d(void)

{
  return;
}




void FUN_00101b31(void)

{
  return;
}




void FUN_00101b73(void)

{
  return;
}




void FUN_001016d0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101429(void)

{
  long in_FS_OFFSET;
  int local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  for (local_84 = 0; local_84 < 1; local_84 = local_84 + 1) {
    local_80 = (char *)operator_new__(0x32);
    *local_80 = '\0';
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_80,local_78);
  FUN_001015fa(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f10)();
  return;
}




void FUN_00101bcb(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101acd(void)

{
  return 1;
}




void FUN_00101726(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101e30(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001017d6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101b05(void)

{
  return;
}




void FUN_00101751(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101857(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101d2a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001014d7(void)

{
  long in_FS_OFFSET;
  int local_84;
  char *local_80;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  for (local_84 = 0; local_84 < 1; local_84 = local_84 + 1) {
    local_80 = (char *)operator_new__(100);
    *local_80 = '\0';
  }
  memset(local_78,0x43,99);
  local_15 = 0;
  strcat(local_80,local_78);
  FUN_001015fa(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015fa(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101de5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101b26(void)

{
  return;
}




void FUN_00101bc0(void)

{
  return;
}




void FUN_00101baa(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




undefined8 FUN_00101d4d(undefined8 *param_1)

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




void FUN_0010188a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001016fb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101620(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001017fe(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101b68(void)

{
  return;
}




void FUN_00101b9f(void)

{
  return;
}




void FUN_00101b94(void)

{
  return;
}




undefined8 FUN_00101c02(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101bcb,local_18);
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




void FUN_00101b3c(void)

{
  return;
}




void FUN_00101b10(void)

{
  return;
}




void FUN_00101585(void)

{
  FUN_001014d7();
  return;
}




void FUN_0010167a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010177c(undefined4 param_1)

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



