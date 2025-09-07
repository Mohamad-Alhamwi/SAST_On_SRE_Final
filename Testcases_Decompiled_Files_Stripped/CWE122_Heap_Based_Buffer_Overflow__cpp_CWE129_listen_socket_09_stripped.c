
void FUN_00101f32(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001022f1(void)

{
  return;
}




void FUN_00102307(void)

{
  return;
}




void FUN_00102312(void)

{
  return;
}




void FUN_00101509(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  if (DAT_0010310c != 0) {
    local_50 = -1;
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
         (local_50 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_50 != -1)) {
        sVar2 = recv(local_50,local_1e,0xd,0);
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
    if (local_50 != -1) {
      close(local_50);
    }
  }
  if (DAT_0010310c != 0) {
    pvVar3 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_4c * 4) = 0;
    }
    if (local_54 < 0) {
      FUN_00101ddb("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_54 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101e33(*(undefined4 *)((long)pvVar3 + (long)local_4c * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101961(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  if (DAT_0010310c != 0) {
    local_50 = -1;
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
         (local_50 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_50 != -1)) {
        sVar2 = recv(local_50,local_1e,0xd,0);
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
    if (local_50 != -1) {
      close(local_50);
    }
  }
  if (DAT_0010310c != 0) {
    pvVar3 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_4c * 4) = 0;
    }
    if ((local_54 < 0) || (9 < local_54)) {
      FUN_00101ddb("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_54 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101e33(*(undefined4 *)((long)pvVar3 + (long)local_4c * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102375(void)

{
  return;
}




void FUN_001025c6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010235f(void)

{
  return;
}




ulong FUN_001020cb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030f0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101d76(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101ddb("Calling good()...");
  FUN_00101d57();
  FUN_00101ddb("Finished good()");
  FUN_00101ddb("Calling bad()...");
  FUN_00101509();
  FUN_00101ddb("Finished bad()");
  return 0;
}




void FUN_00101f5d(undefined4 param_1)

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




undefined8 FUN_001022ae(void)

{
  return 1;
}




void FUN_0010236a(void)

{
  return;
}




void FUN_0010200a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102328(void)

{
  return;
}




void FUN_00101e5b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001025a7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001022bd(void)

{
  return 0;
}




void FUN_00102396(void)

{
  return;
}




void FUN_00101ddb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101d57(void)

{
  FUN_0010172a();
  FUN_00101961();
  FUN_00101b8b();
  FUN_00101c78();
  return;
}




void FUN_00101b8b(void)

{
  void *pvVar1;
  int local_18;
  int local_14;
  
  local_18 = -1;
  if (DAT_00103110 == 0) {
    local_18 = 7;
  }
  else {
    FUN_00101ddb("Benign, fixed string");
  }
  if (DAT_0010310c != 0) {
    pvVar1 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
    }
    if (local_18 < 0) {
      FUN_00101ddb("ERROR: Array index is negative.");
    }
    else {
      *(undefined4 *)((long)pvVar1 + (long)local_18 * 4) = 1;
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        FUN_00101e33(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
      }
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  return;
}




void FUN_0010231d(void)

{
  return;
}




void FUN_0010238b(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed8)();
  return;
}




void FUN_00101e33(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




int FUN_001022cc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001022fc(void)

{
  return;
}




void FUN_0010172a(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  sockaddr local_38;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = -1;
  if (DAT_0010310c != 0) {
    local_50 = -1;
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
         (local_50 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_50 != -1)) {
        sVar2 = recv(local_50,local_1e,0xd,0);
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
    if (local_50 != -1) {
      close(local_50);
    }
  }
  if (DAT_00103110 == 0) {
    pvVar3 = operator_new__(0x28);
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      *(undefined4 *)((long)pvVar3 + (long)local_4c * 4) = 0;
    }
    if ((local_54 < 0) || (9 < local_54)) {
      FUN_00101ddb("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)pvVar3 + (long)local_54 * 4) = 1;
      for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
        FUN_00101e33(*(undefined4 *)((long)pvVar3 + (long)local_4c * 4));
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  else {
    FUN_00101ddb("Benign, fixed string");
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101edc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101450();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101fdf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_0010252e(undefined8 *param_1)

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




void FUN_001022e6(void)

{
  return;
}




void FUN_00102354(void)

{
  return;
}




undefined8 FUN_0010250b(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001025e5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102333(void)

{
  return;
}




void FUN_00102610(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101e87(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f07(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010206b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010233e(void)

{
  return;
}




void FUN_00102349(void)

{
  return;
}




void FUN_00102380(void)

{
  return;
}




void FUN_00102038(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001023a1(void)

{
  return;
}




void FUN_001023ac(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102680(void)

{
  return;
}




void FUN_00101fb7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e01(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101eb1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001023e3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001023ac,local_18);
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




/* WARNING: Removing unreachable block (ram,0x00101d35) */

void FUN_00101c78(void)

{
  void *pvVar1;
  undefined4 local_14;
  
  if (DAT_0010310c != 0) {
    pvVar1 = operator_new__(0x28);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      *(undefined4 *)((long)pvVar1 + (long)local_14 * 4) = 0;
    }
    *(undefined4 *)((long)pvVar1 + 0x1c) = 1;
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00101e33(*(undefined4 *)((long)pvVar1 + (long)local_14 * 4));
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
  }
  return;
}




bool FUN_001024b0(pthread_t *param_1)

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




ulong FUN_001021cf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



