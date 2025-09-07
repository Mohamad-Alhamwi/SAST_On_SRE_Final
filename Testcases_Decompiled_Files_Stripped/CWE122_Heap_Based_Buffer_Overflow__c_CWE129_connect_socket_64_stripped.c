
void FUN_001014c9(int *param_1)

{
  int iVar1;
  void *__ptr;
  int local_20;
  
  iVar1 = *param_1;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_20 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_00101a65("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
        FUN_00101abd(*(undefined4 *)((long)__ptr + (long)local_20 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101f91(void)

{
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_0010167d(int *param_1)

{
  int iVar1;
  void *__ptr;
  int local_20;
  
  iVar1 = *param_1;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_20 * 4) = 0;
    }
    if ((iVar1 < 0) || (9 < iVar1)) {
      FUN_00101a65("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
        FUN_00101abd(*(undefined4 *)((long)__ptr + (long)local_20 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101fb2(void)

{
  return;
}




undefined8 FUN_001021b8(undefined8 *param_1)

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




void FUN_00101fff(void)

{
  return;
}




void FUN_00101b3b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102036(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101cc2(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fde(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




ulong FUN_00101d55(long param_1,ulong param_2,long param_3)

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




void FUN_001019d7(void)

{
  FUN_00101874();
  FUN_001018c0();
  return;
}




void FUN_0010202b(void)

{
  return;
}




undefined8 FUN_001019f6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a65("Calling good()...");
  FUN_001019d7();
  FUN_00101a65("Finished good()");
  FUN_00101a65("Calling bad()...");
  FUN_0010175d();
  FUN_00101a65("Finished bad()");
  return 0;
}




void FUN_00101874(void)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 7;
  FUN_001015a3(&local_14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fbd(void)

{
  return;
}




void FUN_00101be7(undefined4 param_1)

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




void FUN_00101fd3(void)

{
  return;
}




void FUN_00102231(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102310(void)

{
  return;
}




void FUN_001015a3(int *param_1)

{
  int iVar1;
  void *__ptr;
  int local_20;
  
  iVar1 = *param_1;
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_20 * 4) = 0;
    }
    if (iVar1 < 0) {
      FUN_00101a65("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
      for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
        FUN_00101abd(*(undefined4 *)((long)__ptr + (long)local_20 * 4));
      }
    }
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00102015(void)

{
  return;
}




undefined8 FUN_0010206d(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102036,local_18);
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




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101200(PTR_LOOP_00105008);
    }
    FUN_00101410();
    DAT_00105018 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102195(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101e59(long param_1,ulong param_2,long param_3)

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




void FUN_00101b66(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a8b(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101fc8(void)

{
  return;
}




undefined8 FUN_00101f47(void)

{
  return 0;
}




void FUN_001018c0(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_44;
  int local_40;
  int local_3c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = -1;
  local_40 = 0xffffffff;
  local_40 = socket(2,1,6);
  if (local_40 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(local_40,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_40,local_1e,0xd,0);
      local_3c = (int)sVar2;
      if ((local_3c != -1) && (local_3c != 0)) {
        local_1e[local_3c] = '\0';
        local_44 = atoi(local_1e);
      }
    }
  }
  if (local_40 != -1) {
    close(local_40);
  }
  FUN_0010167d(&local_44);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101f7b(void)

{
  return;
}




void FUN_00101fe9(void)

{
  return;
}




void FUN_0010175d(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_44;
  int local_40;
  int local_3c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = -1;
  local_40 = 0xffffffff;
  local_40 = socket(2,1,6);
  if (local_40 != -1) {
    memset(&local_38,0,0x10);
    local_38.sa_family = 2;
    local_38.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_38.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(local_40,&local_38,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_40,local_1e,0xd,0);
      local_3c = (int)sVar2;
      if ((local_3c != -1) && (local_3c != 0)) {
        local_1e[local_3c] = '\0';
        local_44 = atoi(local_1e);
      }
    }
  }
  if (local_40 != -1) {
    close(local_40);
  }
  FUN_001014c9(&local_44);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00101f56(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101f9c(void)

{
  return;
}




void FUN_00101b91(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c41(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010200a(void)

{
  return;
}




void FUN_001022a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b11(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101fa7(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101c69(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101f38(void)

{
  return 1;
}




void FUN_00101f86(void)

{
  return;
}




void FUN_00101ae5(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_0010213a(pthread_t *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




void FUN_0010226f(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102250(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c94(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102020(void)

{
  return;
}




void FUN_00101ff4(void)

{
  return;
}




void FUN_00101bbc(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cf5(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f70(void)

{
  return;
}




void FUN_00101abd(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a65(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}



