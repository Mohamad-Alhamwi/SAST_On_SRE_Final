
/* WARNING: Removing unreachable block (ram,0x00101a61) */
/* WARNING: Removing unreachable block (ram,0x00101acf) */

void FUN_001019b3(void)

{
  int iVar1;
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
  FUN_00102071();
  iVar1 = FUN_00102071();
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_20._4_4_ = 1;
    for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
      FUN_00101bd8(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
    }
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_20._4_4_ = 1;
    for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
      FUN_00101bd8(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001020d8(void)

{
  return;
}




void FUN_001014a9(void)

{
  uint16_t uVar1;
  int iVar2;
  in_addr_t iVar3;
  int iVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  int local_5c;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = -1;
  iVar2 = FUN_00102071();
  if (iVar2 == 0) {
    local_5c = 7;
  }
  else {
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      iVar3 = inet_addr("127.0.0.1");
      local_48.sa_data._2_4_ = iVar3;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar4 = connect(iVar2,&local_48,0x10);
      if (iVar4 != -1) {
        sVar5 = recv(iVar2,local_1e,0xd,0);
        iVar4 = (int)sVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          local_1e[iVar4] = '\0';
          local_5c = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
  }
  iVar2 = FUN_00102071();
  if (iVar2 == 0) {
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
      FUN_00101b80("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2) = 1;
      for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
        FUN_00101bd8(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
      }
    }
  }
  else {
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
      for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
        FUN_00101bd8(*(undefined4 *)(local_48.sa_data + (long)local_58 * 4 + -2));
      }
    }
    else {
      FUN_00101b80("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101b11(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101b80("Calling good()...");
  FUN_00101af2();
  FUN_00101b80("Finished good()");
  FUN_00101b80("Calling bad()...");
  FUN_001014a9();
  FUN_00101b80("Finished bad()");
  return 0;
}




void FUN_001020f9(void)

{
  return;
}




void FUN_001023c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102146(void)

{
  return;
}




void FUN_00101d5c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001022d3(undefined8 *param_1)

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




undefined8 FUN_00102053(void)

{
  return 1;
}




void FUN_00102125(void)

{
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




int FUN_00102071(void)

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




void FUN_00101c00(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001022b0(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101c2c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ba6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102104(void)

{
  return;
}




void FUN_00101e10(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010211a(void)

{
  return;
}




void FUN_00102430(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101af2(void)

{
  FUN_001016c2();
  FUN_001019b3();
  return;
}




undefined8 FUN_00102188(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102151,local_18);
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




void FUN_0010234c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010238a(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010208b(void)

{
  return;
}




void FUN_00101d84(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101c81(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_0010210f(void)

{
  return;
}




void FUN_001020a1(void)

{
  return;
}




void FUN_00101bd8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001020c2(void)

{
  return;
}




void FUN_00102130(void)

{
  return;
}




void FUN_00101b80(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001020ac(void)

{
  return;
}




void FUN_001020e3(void)

{
  return;
}




void FUN_00101daf(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_00101e70(long param_1,ulong param_2,long param_3)

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




void FUN_00102151(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d02(undefined4 param_1)

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




void FUN_001020ee(void)

{
  return;
}




void FUN_001016c2(void)

{
  uint16_t uVar1;
  int iVar2;
  in_addr_t iVar3;
  int iVar4;
  ssize_t sVar5;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = -1;
  iVar2 = FUN_00102071();
  if (iVar2 == 0) {
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      iVar3 = inet_addr("127.0.0.1");
      local_48.sa_data._2_4_ = iVar3;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar4 = connect(iVar2,&local_48,0x10);
      if (iVar4 != -1) {
        sVar5 = recv(iVar2,local_1e,0xd,0);
        iVar4 = (int)sVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          local_1e[iVar4] = '\0';
          local_64 = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
  }
  else {
    iVar2 = socket(2,1,6);
    if (iVar2 != -1) {
      memset(&local_48,0,0x10);
      local_48.sa_family = 2;
      iVar3 = inet_addr("127.0.0.1");
      local_48.sa_data._2_4_ = iVar3;
      uVar1 = htons(0x6987);
      local_48.sa_data._0_2_ = uVar1;
      iVar4 = connect(iVar2,&local_48,0x10);
      if (iVar4 != -1) {
        sVar5 = recv(iVar2,local_1e,0xd,0);
        iVar4 = (int)sVar5;
        if ((iVar4 != -1) && (iVar4 != 0)) {
          local_1e[iVar4] = '\0';
          local_64 = atoi(local_1e);
        }
      }
    }
    if (iVar2 != -1) {
      close(iVar2);
    }
  }
  iVar2 = FUN_00102071();
  if (iVar2 == 0) {
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
    if ((local_64 < 0) || (9 < local_64)) {
      FUN_00101b80("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_64 * 4 + -2) = 1;
      for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
        FUN_00101bd8(*(undefined4 *)(local_48.sa_data + (long)local_5c * 4 + -2));
      }
    }
  }
  else {
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
    if ((local_64 < 0) || (9 < local_64)) {
      FUN_00101b80("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)(local_48.sa_data + (long)local_64 * 4 + -2) = 1;
      for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
        FUN_00101bd8(*(undefined4 *)(local_48.sa_data + (long)local_60 * 4 + -2));
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00101f74(long param_1,ulong param_2,long param_3)

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




void FUN_00102096(void)

{
  return;
}




void FUN_001020cd(void)

{
  return;
}




void FUN_00101cd7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010236b(pthread_mutex_t *param_1)

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




bool FUN_00102255(pthread_t *param_1)

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




void FUN_0010213b(void)

{
  return;
}




void FUN_00101ddd(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102062(void)

{
  return 0;
}




void FUN_001020b7(void)

{
  return;
}




void FUN_00101cac(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c56(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



