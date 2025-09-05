
void FUN_001014a9(void)

{
  uint16_t uVar1;
  int __fd;
  in_addr_t iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_48.sa_data._2_4_ = iVar2;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar3 = connect(__fd,&local_48,0x10);
    if (iVar3 != -1) {
      sVar4 = recv(__fd,local_1e,0xd,0);
      iVar3 = (int)sVar4;
      if ((iVar3 != -1) && (iVar3 != 0)) {
        local_1e[iVar3] = '\0';
        local_58 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
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
  if (local_58 < 10) {
    *(undefined4 *)(local_48.sa_data + (long)local_58 * 4 + -2) = 1;
    for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
      FUN_00101b76(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
    }
  }
  else {
    FUN_00101b1e("ERROR: Array index is negative.");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010204a(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




void FUN_001017a1(void)

{
  uint16_t uVar1;
  int __fd;
  in_addr_t iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_48.sa_data._2_4_ = iVar2;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar3 = connect(__fd,&local_48,0x10);
    if (iVar3 != -1) {
      sVar4 = recv(__fd,local_1e,0xd,0);
      iVar3 = (int)sVar4;
      if ((iVar3 != -1) && (iVar3 != 0)) {
        local_1e[iVar3] = '\0';
        local_58 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
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
  if ((local_58 < 0) || (9 < local_58)) {
    FUN_00101b1e("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)(local_48.sa_data + (long)local_58 * 4 + -2) = 1;
    for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
      FUN_00101b76(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010206b(void)

{
  return;
}




undefined8 FUN_00102271(undefined8 *param_1)

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




void FUN_001020b8(void)

{
  return;
}




void FUN_00101c1f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001020ef(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d7b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102097(void)

{
  return;
}




ulong FUN_00101e0e(long param_1,ulong param_2,long param_3)

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




void FUN_001020e4(void)

{
  return;
}




undefined8 FUN_00101aaf(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101b1e("Calling good()...");
  FUN_00101a7c();
  FUN_00101b1e("Finished good()");
  FUN_00101b1e("Calling bad()...");
  FUN_001014a9();
  FUN_00101b1e("Finished bad()");
  return 0;
}




void FUN_00101b1e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101a58) */

void FUN_001019ce(void)

{
  long in_FS_OFFSET;
  int local_40;
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
    FUN_00101b76(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102076(void)

{
  return;
}




void FUN_00101cfa(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010208c(void)

{
  return;
}




void FUN_001022ea(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001023d0(void)

{
  return;
}




void FUN_001011f0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101622(void)

{
  uint16_t uVar1;
  int __fd;
  in_addr_t iVar2;
  int iVar3;
  ssize_t sVar4;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  sockaddr local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = -1;
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    iVar2 = inet_addr("127.0.0.1");
    local_48.sa_data._2_4_ = iVar2;
    uVar1 = htons(0x6987);
    local_48.sa_data._0_2_ = uVar1;
    iVar3 = connect(__fd,&local_48,0x10);
    if (iVar3 != -1) {
      sVar4 = recv(__fd,local_1e,0xd,0);
      iVar3 = (int)sVar4;
      if ((iVar3 != -1) && (iVar3 != 0)) {
        local_1e[iVar3] = '\0';
        local_58 = atoi(local_1e);
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
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
  if ((local_58 < 0) || (9 < local_58)) {
    FUN_00101b1e("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)(local_48.sa_data + (long)local_58 * 4 + -2) = 1;
    for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
      FUN_00101b76(*(undefined4 *)(local_48.sa_data + (long)local_54 * 4 + -2));
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001020ce(void)

{
  return;
}




undefined8 FUN_00102126(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020ef,local_18);
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




undefined8 FUN_0010224e(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101f12(long param_1,ulong param_2,long param_3)

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




void FUN_00101c4a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b76(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




void FUN_00102081(void)

{
  return;
}




undefined8 FUN_00102000(void)

{
  return 0;
}




void FUN_00101a7c(void)

{
  FUN_00101622();
  FUN_001017a1();
  FUN_00101920();
  FUN_001019ce();
  return;
}




void FUN_00102034(void)

{
  return;
}




void FUN_001020a2(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001019aa) */

void FUN_00101920(void)

{
  long in_FS_OFFSET;
  int local_40;
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
    FUN_00101b76(*(undefined4 *)((long)&local_38 + (long)local_40 * 4));
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_0010200f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102055(void)

{
  return;
}




void FUN_00101c75(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d22(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001020c3(void)

{
  return;
}




void FUN_00102360(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101bf4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102060(void)

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




void FUN_00101d4d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101ff1(void)

{
  return 1;
}




void FUN_0010203f(void)

{
  return;
}




void FUN_00101bca(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




bool FUN_001021f3(pthread_t *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00102328(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102309(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001020d9(void)

{
  return;
}




void FUN_001020ad(void)

{
  return;
}




void FUN_00101ca0(undefined4 param_1)

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




void FUN_00101dae(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102029(void)

{
  return;
}




void FUN_00101b9e(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b44(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}



