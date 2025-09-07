
void FUN_00101b1e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ff8(void)

{
  return;
}




void FUN_00101ac8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b74(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102019(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102252(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101f2a(void)

{
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101f8a(void)

{
  return;
}




undefined8 FUN_0010219b(undefined8 *param_1)

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




void FUN_001019ba(void)

{
  FUN_001016be();
  FUN_001018b9();
  return;
}




void FUN_00101fa0(void)

{
  return;
}




void FUN_001018b9(void)

{
  void *__ptr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = -1;
  for (local_20 = 0; local_20 < 1; local_20 = local_20 + 1) {
    local_18 = 7;
  }
  local_1c = 0;
  while( true ) {
    if (0 < local_1c) {
      return;
    }
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) break;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)__ptr + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101a48("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101aa0(*(undefined4 *)((long)__ptr + (long)local_14 * 4));
      }
    }
    free(__ptr);
    local_1c = local_1c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




void FUN_00101c4c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101bca(undefined4 param_1)

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




void FUN_00101c77(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
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




undefined8 FUN_00102050(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102019,local_18);
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




void FUN_00101f69(void)

{
  return;
}




undefined8 FUN_00102178(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101a48(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101b49(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001022f0(void)

{
  return;
}




void FUN_00101fab(void)

{
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




int FUN_00101f39(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001014c9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *__ptr;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  for (local_58 = 0; local_58 < 1; local_58 = local_58 + 1) {
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
          local_50 = atoi(local_1e);
        }
      }
    }
    if (__fd != -1) {
      close(__fd);
    }
  }
  for (local_54 = 0; local_54 < 1; local_54 = local_54 + 1) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)__ptr + (long)local_4c * 4) = 0;
    }
    if (local_50 < 0) {
      FUN_00101a48("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101aa0(*(undefined4 *)((long)__ptr + (long)local_4c * 4));
      }
    }
    free(__ptr);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101cd8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001019d9(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101a48("Calling good()...");
  FUN_001019ba();
  FUN_00101a48("Finished good()");
  FUN_00101a48("Calling bad()...");
  FUN_001014c9();
  FUN_00101a48("Finished bad()");
  return 0;
}




void FUN_00101a6e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




bool FUN_0010211d(pthread_t *param_1)

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




void FUN_00101fc1(void)

{
  return;
}




void FUN_00101c24(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101fe2(void)

{
  return;
}




void FUN_00102214(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




void FUN_00101b9f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101fcc(void)

{
  return;
}




void FUN_00102003(void)

{
  return;
}




void FUN_00101f53(void)

{
  return;
}




void FUN_00101f74(void)

{
  return;
}




void FUN_00102280(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101f1b(void)

{
  return 1;
}




void FUN_0010200e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101af4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f7f(void)

{
  return;
}




void FUN_00101fb6(void)

{
  return;
}




void FUN_00101fed(void)

{
  return;
}




void FUN_001016be(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *__ptr;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = -1;
  for (local_58 = 0; local_58 < 1; local_58 = local_58 + 1) {
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
          local_50 = atoi(local_1e);
        }
      }
    }
    if (__fd != -1) {
      close(__fd);
    }
  }
  for (local_54 = 0; local_54 < 1; local_54 = local_54 + 1) {
    __ptr = malloc(0x28);
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)__ptr + (long)local_4c * 4) = 0;
    }
    if ((local_50 < 0) || (9 < local_50)) {
      FUN_00101a48("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)__ptr + (long)local_50 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101aa0(*(undefined4 *)((long)__ptr + (long)local_4c * 4));
      }
    }
    free(__ptr);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00101e3c(long param_1,ulong param_2,long param_3)

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




void FUN_00101aa0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102233(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101f5e(void)

{
  return;
}




void FUN_00101f95(void)

{
  return;
}




void FUN_00101fd7(void)

{
  return;
}




ulong FUN_00101d38(long param_1,ulong param_2,long param_3)

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




void FUN_00101ca5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}



