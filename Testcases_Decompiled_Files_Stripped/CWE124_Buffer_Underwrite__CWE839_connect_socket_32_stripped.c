
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001014a9(void)

{
  uint16_t uVar1;
  in_addr_t iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_50;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_70;
  local_50 = &local_70;
  local_70 = -1;
  local_6c = -1;
  local_64 = 0xffffffff;
  local_64 = socket(2,1,6);
  if (local_64 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_48.sa_data._2_4_ = iVar2;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar3 = connect(local_64,&local_48,0x10);
    if (iVar3 != -1) {
      sVar4 = recv(local_64,local_1e,0xd,0);
      local_60 = (int)sVar4;
      if ((local_60 != -1) && (local_60 != 0)) {
        local_1e[local_60] = '\0';
        local_6c = atoi(local_1e);
      }
    }
  }
  if (local_64 != -1) {
    close(local_64);
  }
  *local_58 = local_6c;
  local_5c = *local_50;
  local_48.sa_family = 0;
  local_48.sa_data[0] = '\0';
  local_48.sa_data[1] = '\0';
  local_48.sa_data[2] = '\0';
  local_48.sa_data[3] = '\0';
  local_48.sa_data[4] = '\0';
  local_48.sa_data[5] = '\0';
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if (local_5c < 10) {
    *(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2) = 1;
    for (local_68 = 0; local_68 < 10; local_68 = local_68 + 1) {
      FUN_001019b0(*(undefined4 *)(local_48.sa_data + (long)local_68 * 4 + -2));
    }
  }
  else {
    FUN_00101958("ERROR: Array index is negative.");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e9a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101722(void)

{
  uint16_t uVar1;
  in_addr_t iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_50;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_70;
  local_50 = &local_70;
  local_70 = -1;
  local_6c = -1;
  local_64 = 0xffffffff;
  local_64 = socket(2,1,6);
  if (local_64 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_48.sa_data._2_4_ = iVar2;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar3 = connect(local_64,&local_48,0x10);
    if (iVar3 != -1) {
      sVar4 = recv(local_64,local_1e,0xd,0);
      local_60 = (int)sVar4;
      if ((local_60 != -1) && (local_60 != 0)) {
        local_1e[local_60] = '\0';
        local_6c = atoi(local_1e);
      }
    }
  }
  if (local_64 != -1) {
    close(local_64);
  }
  *local_58 = local_6c;
  local_5c = *local_50;
  local_48.sa_family = 0;
  local_48.sa_data[0] = '\0';
  local_48.sa_data[1] = '\0';
  local_48.sa_data[2] = '\0';
  local_48.sa_data[3] = '\0';
  local_48.sa_data[4] = '\0';
  local_48.sa_data[5] = '\0';
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  if ((local_5c < 0) || (9 < local_5c)) {
    FUN_00101958("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2) = 1;
    for (local_68 = 0; local_68 < 10; local_68 = local_68 + 1) {
      FUN_001019b0(*(undefined4 *)(local_48.sa_data + (long)local_68 * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101ebb(void)

{
  return;
}




void FUN_00102143(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f08(void)

{
  return;
}




void FUN_00101aaf(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_0010202d(pthread_t *param_1)

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




ulong FUN_00101c48(long param_1,ulong param_2,long param_3)

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




void FUN_00101ee7(void)

{
  return;
}




undefined8 FUN_00101e2b(void)

{
  return 1;
}




undefined8 FUN_00101f60(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f29,local_18);
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




void FUN_0010197e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001019b0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001018e9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101958("Calling good()...");
  FUN_001018ca();
  FUN_00101958("Finished good()");
  FUN_00101958("Calling bad()...");
  FUN_001014a9();
  FUN_00101958("Finished bad()");
  return 0;
}




void FUN_00101ec6(void)

{
  return;
}




void FUN_00101b87(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101edc(void)

{
  return;
}




void FUN_00102162(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0010169a */
/* WARNING: Removing unreachable block (ram,0x001016ff) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010164b(void)

{
  long in_FS_OFFSET;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = &local_58;
  local_40 = &local_58;
  local_50 = 7;
  local_58 = 7;
  local_4c = 7;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
  local_20._4_4_ = 1;
  for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
    FUN_001019b0(*(undefined4 *)((long)&local_38 + (long)local_54 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101f1e(void)

{
  return;
}




undefined8 FUN_00102088(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102124(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101e3a(void)

{
  return 0;
}




void FUN_00101ada(undefined4 param_1)

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




void FUN_00101a04(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_00101ed1(void)

{
  return;
}




void FUN_00101e63(void)

{
  return;
}




void FUN_00101958(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e84(void)

{
  return;
}




void FUN_00101ef2(void)

{
  return;
}




void FUN_001018ca(void)

{
  FUN_0010164b();
  FUN_00101722();
  return;
}




void FUN_00101e6e(void)

{
  return;
}




void FUN_00101ea5(void)

{
  return;
}




void FUN_00101b34(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bb5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f13(void)

{
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101eb0(void)

{
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




void FUN_00101be8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




int FUN_00101e49(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101e8f(void)

{
  return;
}




void FUN_00101a59(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001020ab(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102200(void)

{
  return;
}




void FUN_00102190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101f29(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101efd(void)

{
  return;
}




void FUN_00101b5c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101d4c(long param_1,ulong param_2,long param_3)

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




void FUN_00101e79(void)

{
  return;
}




void FUN_00101a2e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019d8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}



