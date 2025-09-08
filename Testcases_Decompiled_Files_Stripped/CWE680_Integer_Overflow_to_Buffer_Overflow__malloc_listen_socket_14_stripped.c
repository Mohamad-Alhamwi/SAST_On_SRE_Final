
void FUN_001018b1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101e0f(void)

{
  return;
}




undefined8 FUN_0010181c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010188b("Calling good()...");
  FUN_001017fd();
  FUN_0010188b("Finished good()");
  FUN_0010188b("Calling bad()...");
  FUN_001014e9();
  FUN_0010188b("Finished bad()");
  return 0;
}




void FUN_0010190b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e30(void)

{
  return;
}




undefined8 FUN_00101fbb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101b1b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001020c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101da1(void)

{
  return;
}




void FUN_00101e5c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101210(PTR_LOOP_00105008);
    }
    FUN_00101430();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101db7(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001019b7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102095(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001019e2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101961(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101210(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101e3b(void)

{
  return;
}




undefined8 FUN_00101d6d(void)

{
  return 0;
}




void FUN_00101e51(void)

{
  return;
}




void FUN_001016bb(void)

{
  undefined4 *__ptr;
  int local_1c;
  ulong local_18;
  
  local_1c = -1;
  if (DAT_00105014 == 5) {
    local_1c = 0x14;
  }
  else {
    FUN_0010188b("Benign, fixed string");
  }
  __ptr = (undefined4 *)malloc((long)local_1c << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)local_1c; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_001018e3(*__ptr);
  free(__ptr);
  return;
}




void FUN_001018e3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102057(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102130(void)

{
  return;
}




void FUN_00101dc2(void)

{
  return;
}




ulong FUN_00101b7b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a67(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001014e9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  undefined4 *__ptr;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  ulong local_48;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = -1;
  if (DAT_00105014 == 5) {
    local_54 = -1;
    __fd = socket(2,1,6);
    if (__fd != -1) {
      memset(&local_38,0,0x10);
      local_38.sa_family = 2;
      local_38.sa_data[2] = '\0';
      local_38.sa_data[3] = '\0';
      local_38.sa_data[4] = '\0';
      local_38.sa_data[5] = '\0';
      local_38.sa_data._0_2_ = htons(0x6987);
      iVar1 = bind(__fd,&local_38,0x10);
      if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
         (local_54 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_54 != -1)) {
        sVar2 = recv(local_54,local_1e,0xd,0);
        iVar1 = (int)sVar2;
        if ((iVar1 != -1) && (iVar1 != 0)) {
          local_1e[iVar1] = '\0';
          local_58 = atoi(local_1e);
        }
      }
    }
    if (__fd != -1) {
      close(__fd);
    }
    if (local_54 != -1) {
      close(local_54);
    }
  }
  __ptr = (undefined4 *)malloc((long)local_58 << 2);
  if (__ptr != (undefined4 *)0x0) {
    for (local_48 = 0; local_48 < (ulong)(long)local_58; local_48 = local_48 + 1) {
      __ptr[local_48] = 0;
    }
    FUN_001018e3(*__ptr);
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




void FUN_00101763(void)

{
  undefined4 *__ptr;
  int local_1c;
  ulong local_18;
  
  local_1c = -1;
  if (DAT_00105014 == 5) {
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
  FUN_001018e3(*__ptr);
  free(__ptr);
  return;
}




void FUN_00101e46(void)

{
  return;
}




void FUN_00101dd8(void)

{
  return;
}




void FUN_0010198c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101df9(void)

{
  return;
}




undefined8 FUN_00101e93(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101e5c,local_18);
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




void FUN_00101937(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101de3(void)

{
  return;
}




void FUN_00101e1a(void)

{
  return;
}




ulong FUN_00101c7f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00101d7c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101fde(undefined8 *param_1)

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




void FUN_00101ae8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e25(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ee0)();
  return;
}




void FUN_0010188b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d96(void)

{
  return;
}




void FUN_00101dcd(void)

{
  return;
}




void FUN_00101e04(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101aba(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017fd(void)

{
  FUN_001016bb();
  FUN_00101763();
  return;
}




void FUN_00102076(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




bool FUN_00101f60(pthread_t *param_1)

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




undefined8 FUN_00101d5e(void)

{
  return 1;
}




void FUN_00101dac(void)

{
  return;
}




void FUN_00101dee(void)

{
  return;
}




void FUN_00101a8f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101a0d(undefined4 param_1)

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



