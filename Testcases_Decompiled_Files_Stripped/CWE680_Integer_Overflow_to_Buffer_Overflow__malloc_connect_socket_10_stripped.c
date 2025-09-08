
void FUN_00101654(void)

{
  undefined4 *__ptr;
  int local_1c;
  ulong local_18;
  
  local_1c = -1;
  if (DAT_00105020 == 0) {
    local_1c = 0x14;
  }
  else {
    FUN_00101822("Benign, fixed string");
  }
  __ptr = (undefined4 *)malloc((long)local_1c << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)local_1c; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010187a(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101d6f(void)

{
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




void FUN_00101794(void)

{
  FUN_00101654();
  FUN_001016fb();
  return;
}




void FUN_00101d90(void)

{
  return;
}




void FUN_0010202c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ddd(void)

{
  return;
}




void FUN_001019a4(undefined4 param_1)

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




undefined8 FUN_00101f52(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00101c16(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101dbc(void)

{
  return;
}




undefined8 FUN_00101d04(void)

{
  return 0;
}




bool FUN_00101ef7(pthread_t *param_1)

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




void FUN_0010187a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001018a2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101822(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d9b(void)

{
  return;
}




void FUN_00101a7f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101db1(void)

{
  return;
}




void FUN_001020d0(void)

{
  return;
}




void FUN_00101200(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_001016fb(void)

{
  undefined4 *__ptr;
  int local_1c;
  ulong local_18;
  
  local_1c = -1;
  if (DAT_00105010 != 0) {
    local_1c = 0x14;
  }
  __ptr = (undefined4 *)malloc((long)local_1c << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)local_1c; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_0010187a(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101df3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101f75(undefined8 *param_1)

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




void FUN_0010200d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_00101d13(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001019fe(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001018f8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




void FUN_00101da6(void)

{
  return;
}




void FUN_00101d38(void)

{
  return;
}




void FUN_00101848(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d59(void)

{
  return;
}




void FUN_00101dc7(void)

{
  return;
}




undefined8 FUN_001017b3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101822("Calling good()...");
  FUN_00101794();
  FUN_00101822("Finished good()");
  FUN_00101822("Calling bad()...");
  FUN_001014c9();
  FUN_00101822("Finished bad()");
  return 0;
}




void FUN_00101d43(void)

{
  return;
}




void FUN_00101d7a(void)

{
  return;
}




void FUN_00101a26(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101ab2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101de8(void)

{
  return;
}




void FUN_00101979(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d85(void)

{
  return;
}




void FUN_001014c9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  undefined4 *__ptr;
  long in_FS_OFFSET;
  int local_54;
  ulong local_48;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  if (DAT_00105010 != 0) {
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
          local_54 = atoi(local_1e);
        }
      }
    }
    if (__fd != -1) {
      close(__fd);
    }
  }
  __ptr = (undefined4 *)malloc((long)local_54 << 2);
  if (__ptr != (undefined4 *)0x0) {
    for (local_48 = 0; local_48 < (ulong)(long)local_54; local_48 = local_48 + 1) {
      __ptr[local_48] = 0;
    }
    FUN_0010187a(*__ptr);
    free(__ptr);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}




ulong FUN_00101b12(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d2d(void)

{
  return;
}




void FUN_00101d64(void)

{
  return;
}




void FUN_0010194e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101fee(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00102060(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101e2a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101df3,local_18);
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




void FUN_00101dd2(void)

{
  return;
}




void FUN_00101a51(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101cf5(void)

{
  return 1;
}




void FUN_00101d4e(void)

{
  return;
}




void FUN_00101923(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018ce(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}



