
void FUN_001018e2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00101cd2(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101cf7(void)

{
  return;
}




void FUN_00101d02(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_00101496(void)

{
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  FUN_00101409(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_40 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101839(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_001017e1("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d65(void)

{
  return;
}




undefined8 FUN_00101f34(undefined8 *param_1)

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




void FUN_00101d4f(void)

{
  return;
}




void FUN_00101a3e(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001016ac(void)

{
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  FUN_0010161f(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_40 < 0) || (9 < local_40)) {
    FUN_001017e1("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101839(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010190d(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




ulong FUN_00101ad1(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d5a(void)

{
  return;
}




void FUN_00102020(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001019bd(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101d18(void)

{
  return;
}




void FUN_00101807(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101f11(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101bd5(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d86(void)

{
  return;
}




void FUN_00101767(void)

{
  FUN_00101560();
  FUN_001016ac();
  return;
}




void FUN_0010161f(int *param_1)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar2 = fgets(local_1e,0xe,stdin);
  if (pcVar2 == (char *)0x0) {
    FUN_001017e1("fgets() failed.");
  }
  else {
    iVar1 = atoi(local_1e);
    *param_1 = iVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101547(undefined4 *param_1)

{
  *param_1 = 7;
  return;
}




void FUN_00101d0d(void)

{
  return;
}




void FUN_00101d7b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_001017e1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101cb4(void)

{
  return 1;
}




void FUN_00101cec(void)

{
  return;
}




void FUN_00101409(int *param_1)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar2 = fgets(local_1e,0xe,stdin);
  if (pcVar2 == (char *)0x0) {
    FUN_001017e1("fgets() failed.");
  }
  else {
    iVar1 = atoi(local_1e);
    *param_1 = iVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010188d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101963(undefined4 param_1)

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




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




bool FUN_00101eb6(pthread_t *param_1)

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




undefined8 FUN_00101cc3(void)

{
  return 0;
}




void FUN_00101d44(void)

{
  return;
}




undefined8 FUN_00101de9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101db2,local_18);
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




void FUN_00101fad(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d23(void)

{
  return;
}




void FUN_00101fcc(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101839(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018b7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a10(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101d2e(void)

{
  return;
}




void FUN_00101d39(void)

{
  return;
}




void FUN_00101d70(void)

{
  return;
}




void FUN_001019e5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d91(void)

{
  return;
}




void FUN_00101d9c(void)

{
  return;
}




void FUN_00101feb(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101938(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




undefined8 FUN_0010177c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017e1("Calling good()...");
  FUN_00101767();
  FUN_001017e1("Finished good()");
  FUN_001017e1("Calling bad()...");
  FUN_00101496();
  FUN_001017e1("Finished bad()");
  return 0;
}




void FUN_00101861(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101da7(void)

{
  return;
}




void FUN_00102090(void)

{
  return;
}




void FUN_00101560(void)

{
  long in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  FUN_00101547(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_40 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
                    /* try { // try from 001015e3 to 001015f9 has its CatchHandler @ 001015fc */
      FUN_00101839(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_001017e1("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101db2(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101a71(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}



