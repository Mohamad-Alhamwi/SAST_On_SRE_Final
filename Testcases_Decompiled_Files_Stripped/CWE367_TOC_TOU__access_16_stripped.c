
void FUN_00101fb2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101fd1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101743(void)

{
  FUN_001015f6();
  return;
}




void FUN_001017ed(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101c9a(void)

{
  return 1;
}




void FUN_00101d35(void)

{
  return;
}




void FUN_00101d4b(void)

{
  return;
}




void FUN_0010191e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a24(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d14(void)

{
  return;
}




void FUN_0010189d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101d77(void)

{
  return;
}




void FUN_00102000(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001019f6(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010181f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101873(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101ca9(void)

{
  return 0;
}




void FUN_00101ce8(void)

{
  return;
}




void FUN_00101a57(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001019a3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_00101bbb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef8)();
  return;
}




undefined8 FUN_00101dcf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d98,local_18);
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




void FUN_00101cfe(void)

{
  return;
}




void FUN_00101d82(void)

{
  return;
}




void FUN_00101d6c(void)

{
  return;
}




void FUN_00101847(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00101d56(void)

{
  return;
}




void FUN_001018c8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101489(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  undefined4 local_7c;
  ulong local_78 [12];
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_18 = 0;
  local_7c = 0xffffffff;
  pcVar2 = fgets((char *)local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    FUN_001017c7("fgets() failed");
    local_78[0] = local_78[0] & 0xffffffffffffff00;
  }
  if ((char)local_78[0] != '\0') {
    sVar3 = strlen((char *)local_78);
    *(undefined *)((long)&local_7c + sVar3 + 3) = 0;
  }
  iVar1 = access((char *)local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_7c = open((char *)local_78,2);
  if (local_7c == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar4 = write(local_7c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_7c != -1) {
    close(local_7c);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101d1f(void)

{
  return;
}




void FUN_00101d98(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d40(void)

{
  return;
}




undefined8 FUN_00101f1a(undefined8 *param_1)

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




void FUN_00101949(undefined4 param_1)

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




void FUN_00101cf3(void)

{
  return;
}




void FUN_00101cdd(void)

{
  return;
}




void FUN_00101d2a(void)

{
  return;
}




void FUN_001017c7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011e0(PTR_LOOP_00105008);
    }
    FUN_001013d0();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_001011e0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001015f6(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  undefined4 local_7c;
  ulong local_78 [12];
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_18 = 0;
  local_7c = 0xffffffff;
  pcVar1 = fgets((char *)local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001017c7("fgets() failed");
    local_78[0] = local_78[0] & 0xffffffffffffff00;
  }
  if ((char)local_78[0] != '\0') {
    sVar2 = strlen((char *)local_78);
    *(undefined *)((long)&local_7c + sVar2 + 3) = 0;
  }
  local_7c = open((char *)local_78,2);
  if (local_7c == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  sVar3 = write(local_7c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  if (local_7c != -1) {
    close(local_7c);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00101e9c(pthread_t *param_1)

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




void FUN_00101f93(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_00101ab7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101cd2(void)

{
  return;
}




int FUN_00101cb8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102070(void)

{
  return;
}




void FUN_00101d09(void)

{
  return;
}




void FUN_00101d8d(void)

{
  return;
}




void FUN_001019cb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001018f3(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101ef7(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101d61(void)

{
  return;
}




undefined8 FUN_00101758(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001017c7("Calling good()...");
  FUN_00101743();
  FUN_001017c7("Finished good()");
  FUN_001017c7("Calling bad()...");
  FUN_00101489();
  FUN_001017c7("Finished bad()");
  return 0;
}



