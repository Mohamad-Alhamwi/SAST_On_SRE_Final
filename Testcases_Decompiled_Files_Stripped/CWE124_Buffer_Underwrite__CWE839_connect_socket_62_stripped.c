
/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_00101e84(void)

{
  return;
}




void FUN_00101ea5(void)

{
  return;
}




void FUN_001014a9(int *param_1)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(__fd,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        iVar1 = atoi(local_1e);
        *param_1 = iVar1;
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101f81(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f4a,local_18);
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




void FUN_00101ef2(void)

{
  return;
}




void FUN_001019f9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f29(void)

{
  return;
}




void FUN_00101b55(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101ed1(void)

{
  return;
}




void FUN_00101ba8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101f1e(void)

{
  return;
}




void FUN_00101793(void)

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
  FUN_001015b9(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_40 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_001019d1(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_00101979("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101844(void)

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
  FUN_001015d2(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((local_40 < 0) || (9 < local_40)) {
    FUN_00101979("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_001019d1(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001015d2(int *param_1)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(__fd,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_1e,0xd,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_1e[iVar1] = '\0';
        iVar1 = atoi(local_1e);
        *param_1 = iVar1;
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101eb0(void)

{
  return;
}




void FUN_00101aa5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101ec6(void)

{
  return;
}




bool FUN_0010204e(pthread_t *param_1)

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




void FUN_00102164(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001011f0(PTR_LOOP_00105008);
    }
    FUN_001013f0();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101f08(void)

{
  return;
}




void FUN_00101f34(void)

{
  return;
}




void FUN_00101f4a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101bd6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a25(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101914(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101979("Calling good()...");
  FUN_001018ff();
  FUN_00101979("Finished good()");
  FUN_00101979("Calling bad()...");
  FUN_001016e2();
  FUN_00101979("Finished bad()");
  return 0;
}




void FUN_001021b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_00101ebb(void)

{
  return;
}




ulong FUN_00101c69(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016e2(void)

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
  FUN_001014a9(&local_40);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_40 < 10) {
    *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_001019d1(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    FUN_00101979("ERROR: Array index is negative.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e5b(void)

{
  return 0;
}




void FUN_00101edc(void)

{
  return;
}




void FUN_001015b9(undefined4 *param_1)

{
  *param_1 = 7;
  return;
}




ulong FUN_00101d6d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e8f(void)

{
  return;
}




void FUN_00101a4f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ad0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101efd(void)

{
  return;
}




void FUN_00102183(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102145(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001019d1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e9a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101afb(undefined4 param_1)

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




void FUN_00101c09(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101e6a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_0010199f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101f3f(void)

{
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




undefined8 FUN_001020cc(undefined8 *param_1)

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




undefined8 FUN_001020a9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102220(void)

{
  return;
}




void FUN_00101f13(void)

{
  return;
}




void FUN_00101ee7(void)

{
  return;
}




void FUN_00101a7a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b7d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e4c(void)

{
  return 1;
}




void FUN_00101979(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001018ff(void)

{
  FUN_00101793();
  FUN_00101844();
  return;
}



